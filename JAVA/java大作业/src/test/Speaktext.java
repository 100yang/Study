/**
* <p>Title: Speaktext.java</p>
* <p>Description: </p>
* <p>Copyright: Copyright (c) 2018</p>
* @author 100110100
* @date 2018��12��18��
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
 * Description: �ı����ݵ��ʶ�
 * 
 * @author 100110100
 * @date 2018��12��18��
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
		jf.setTitle("�ı��ʶ�����");
		vic1 = 100;
		vic2 = -2;
		start = new JButton("��ʼ����");
		stop = new JButton("ֹͣ����");
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
		// ����һ���������
		JSlider js1 = new JSlider(0, 100, 0);
		js1.setMajorTickSpacing(20);// ���̶�
		js1.setMinorTickSpacing(5);// �ο̶�
		js1.setPaintTicks(true);// ��ʾ
		js1.setSnapToTicks(true);// �û����ܹ����������������̶���
		js1.setPaintLabels(true);// �ÿ̶�������ʾ����
		JSlider js2 = new JSlider(-10, 10, 0);
		js2.setMajorTickSpacing(2);// ���̶�
		js2.setMinorTickSpacing(1);// �ο̶�
		js2.setPaintTicks(true);// ��ʾ
		js2.setSnapToTicks(true);// �û����ܹ����������������̶���
		js2.setPaintLabels(true);// �ÿ̶�������ʾ����
		js1.setValue(200);
		js2.setValue(-2);
		JLabel L1 = new JLabel("Ŀǰ��������С" + js1.getValue());
		JLabel L2 = new JLabel("Ŀǰ���ʶ��ٶ�" + js2.getValue());
		pCenter.add(L1);
		pCenter.add(js1);
		// �϶���������¼�ʱ
		js1.addChangeListener(new ChangeListener() {

			@Override
			public void stateChanged(ChangeEvent e) {
				// TODO Auto-generated method stub
				if ((JSlider) e.getSource() == js1) {
					L1.setText("Ŀǰ��������С" + js1.getValue());
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
					L2.setText("Ŀǰ���ʶ��ٶ�" + js2.getValue());
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
			// ���� 0-100
			sap.setProperty("Volume", new Variant(vic1));
			// �����ʶ��ٶ� -10 �� +10
			sap.setProperty("Rate", new Variant(vic2));
			String str = text.getText();
			// ִ���ʶ�
			Dispatch.call(sapo, "Speak", new Variant(str));
		} catch (Exception e) {
			e.printStackTrace();
		} finally {
			sapo.safeRelease();
			sap.safeRelease();
		}
	}
}
