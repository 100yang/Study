/**  
* <p>Title: test.java</p>  
* <p>Description: </p>  
* <p>Copyright: Copyright (c) 2018</p>    
* @author 100110100  
* @date 2018年12月30日  
* @version 1.0  
*/
package test;

import java.awt.BorderLayout;
import java.awt.FlowLayout;
import java.awt.GridLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.MouseAdapter;
import java.awt.event.MouseEvent;
import java.awt.event.MouseListener;
import java.io.BufferedReader;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;

import javax.swing.JButton;
import javax.swing.JComboBox;
import javax.swing.JFileChooser;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JScrollBar;
import javax.swing.JScrollPane;
import javax.swing.JTextArea;
import javax.swing.ScrollPaneConstants;
import javax.swing.Timer;

/**
 * <p>
 * Title: test
 * </p>
 * <p>
 * Description: 实现自动滚屏功能
 * </p>
 * 
 * @author 100110100
 * @date 2018年12月30日
 */
public class roll {
	JFrame jf;
	JScrollBar jsb;
	JComboBox jc1;
	JButton speed_button, roll_button, stop_button;
	JPanel jp;
	final String[] spe = { "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "18", "24", "25",
			"36" };

	int speed = 20;

	public roll(JTextArea text, JScrollPane jsc) {
		jf = new JFrame();
		jf.setLayout(new FlowLayout(2, 2, 4));
		jf.setTitle("滚屏速度设置");
		speed_button = new JButton("滚屏速度");
		jc1 = new JComboBox(spe);
		roll_button = new JButton("自动滚屏");
		stop_button = new JButton("停止滚屏");
		jc1.setEditable(true);
		jsb = jsc.getVerticalScrollBar();
		
		Timer timer = new Timer(speed, new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				jsb.setValue(jsb.getValue() + jsb.getUnitIncrement());
			}
		});
		jc1.addActionListener(new ActionListener() {
			@Override
			public void actionPerformed(ActionEvent e) {
				// TODO Auto-generated method stub
				speed = Integer.parseInt(jc1.getSelectedItem().toString());
				jsb.setUnitIncrement(speed);
			}
		});
		roll_button.addActionListener(new ActionListener() {

			@Override
			public void actionPerformed(ActionEvent e) {
				// TODO Auto-generated method stub
				timer.start();
			}
		});
		stop_button.addActionListener(new ActionListener() {

			@Override
			public void actionPerformed(ActionEvent e) {
				// TODO Auto-generated method stub
				timer.stop();
			}
		});
		jp = new JPanel(new GridLayout(2, 3));
		jp.add(roll_button);
		jp.add(stop_button);
		jp.add(speed_button);
		jp.add(jc1);
		jf.add(jp);
		jf.setVisible(true);
		jf.setBounds(300, 500, 300, 200);
	}
}
