/**
* <p>Title: Speaktext.java</p>
* <p>Description: </p>
* <p>Copyright: Copyright (c) 2018</p>
* @author 100110100
* @date 2018年12月18日
* @version 1.0
*/
package test;

import java.awt.BorderLayout;
import java.awt.GridLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;
import java.util.Scanner;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JSlider;
import javax.swing.JTextArea;
import javax.swing.event.ChangeEvent;
import javax.swing.event.ChangeListener;

import com.jacob.activeX.ActiveXComponent;
import com.jacob.com.Dispatch;
import com.jacob.com.Variant;

/**
 * <p>
 * Title: Speaktext
 * </p>
 * <p>
 * Description: 文本内容的朗读
 * 
 * @author 100110100
 * @date 2018年12月18日
 */
public class Speaktext extends Thread{
	JFrame jf;
	int vic1, vic2;
	ActiveXComponent sap;
	Dispatch sapo;
	JButton start, stop;
	JPanel pNorth, pCenter;

	public Speaktext(JTextArea text) {
		jf = new JFrame();
		jf.setTitle("文本朗读设置");
		vic1 = 100;
		vic2 = -2;
		start = new JButton("开始播放");
		stop = new JButton("停止播放");
		start.addActionListener(new ActionListener() {

			@Override
			public void actionPerformed(ActionEvent e) {
				// TODO Auto-generated method stub
				play_voice(vic1, vic2, text);
			}
		});
		stop.addActionListener(new ActionListener() {

			@Override
			public void actionPerformed(ActionEvent e) {
				// TODO Auto-generated method stub
				System.exit(0);
			}
		});
		pCenter = new JPanel(new GridLayout(4, 1));
		// 创建一个滑块对象
		JSlider js1 = new JSlider(0, 100, 0);
		js1.setMajorTickSpacing(20);// 主刻度
		js1.setMinorTickSpacing(5);// 次刻度
		js1.setPaintTicks(true);// 显示
		js1.setSnapToTicks(true);// 让滑块能够滑倒附近的整数刻度上
		js1.setPaintLabels(true);// 让刻度数字显示出来
		JSlider js2 = new JSlider(-10, 10, 0);
		js2.setMajorTickSpacing(2);// 主刻度
		js2.setMinorTickSpacing(1);// 次刻度
		js2.setPaintTicks(true);// 显示
		js2.setSnapToTicks(true);// 让滑块能够滑倒附近的整数刻度上
		js2.setPaintLabels(true);// 让刻度数字显示出来
		js1.setValue(200);
		js2.setValue(-2);
		JLabel L1 = new JLabel("目前的音量大小" + js1.getValue());
		JLabel L2 = new JLabel("目前的朗读速度" + js2.getValue());
		pCenter.add(L1);
		pCenter.add(js1);
		// 拖动滑块产生事件时
		js1.addChangeListener(new ChangeListener() {

			@Override
			public void stateChanged(ChangeEvent e) {
				// TODO Auto-generated method stub
				if ((JSlider) e.getSource() == js1) {
					L1.setText("目前的音量大小" + js1.getValue());
					vic1 = js1.getValue();
					vic2 = js2.getValue();
				}
			}
		});
		pCenter.add(L2);
		pCenter.add(js2);
		js2.addChangeListener(new ChangeListener() {

			@Override
			public void stateChanged(ChangeEvent e) {
				// TODO Auto-generated method stub
				if ((JSlider) e.getSource() == js2) {
					L2.setText("目前的朗读速度" + js2.getValue());
					vic1 = js1.getValue();
					vic2 = js2.getValue();
				}
			}
		});
		pNorth = new JPanel();
		pNorth.add(start);
		pNorth.add(stop);
		jf.add(pNorth, BorderLayout.NORTH);
		jf.add(pCenter, BorderLayout.CENTER);
		jf.setVisible(true);
		jf.setBounds(200, 150, 500, 500);
	}

	public void windowClosing(WindowEvent e) {
		jf.dispose();
	}

	public void play_voice(int vic1, int vic2, JTextArea text) {
		sap = new ActiveXComponent("Sapi.SpVoice");
		sapo = sap.getObject();
		try {
			// 音量 0-100
			sap.setProperty("Volume", new Variant(vic1));
			// 语音朗读速度 -10 到 +10
			sap.setProperty("Rate", new Variant(vic2));
			String str = text.getText();
			// 执行朗读
			Dispatch.call(sapo, "Speak", new Variant(str));
		} catch (Exception e) {
			e.printStackTrace();
		} finally {
			sapo.safeRelease();
			sap.safeRelease();
		}
	}
}
