/**  
* <p>Title: FontChange.java</p>  
* <p>Description: </p>  
* <p>Copyright: Copyright (c) 2017</p>  
* <p>Company: www.baidudu.com</p>  
* @author 100110100  
* @date 2018��12��17��  
* @version 1.0  
*/
package test;

/**  
* <p>Title: FontChange</p>  
* <p>Description: ����������ɫ ��С ��ʽ�ĸı�  
* @author 100110100  
* @date 2018��12��17��  
*/
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class FontChange {
	JComboBox fontname, fontsize, fontstyle;
	JButton b1, b2;
	JTextArea txtContent;
	Font font;
	String[] fontarr;
	String[] style = { "����", "����", "б��", "��б��" };
	final String[] sizearr = { "8", "9", "10", "12", "14", "16", "18", "20", "24", "28", "32", "36", "40", "44", "48",
			"54", "60", "66", "72", "80", "88", "99" };

	public FontChange(JTextArea text, JFrame jf) {
		/*
		 * GraphicsEnvironment �������� Java(tm) Ӧ�ó������ض�ƽ̨�Ͽ��õ� GraphicsDevice ����� Font
		 * ����ļ��ϡ�
		 */
		JFrame jf1 = new JFrame();
		jf1.setTitle("����ı�");
		GraphicsEnvironment env = GraphicsEnvironment.getLocalGraphicsEnvironment();
		// ��ȡϵͳ�а�װ����������ļ�����
		fontarr = env.getAvailableFontFamilyNames();
		fontname = new JComboBox(fontarr);
		fontsize = new JComboBox(sizearr);
		fontstyle = new JComboBox(style);
		fontname.setEditable(true);
		fontsize.setEditable(true);
		fontsize.setEditable(true);
		b1 = new JButton("������ɫ");
		b2 = new JButton("������ɫ");
		fontname.setSelectedItem("����");
		fontsize.setSelectedItem("23");
		/* ��ȡѡ������� �����С */
		fontname.addActionListener(new ActionListener() {
			@Override
			public void actionPerformed(ActionEvent e) {
				// TODO Auto-generated method stub
				String s = fontname.getSelectedItem().toString();
				int i = fontstyle.getSelectedIndex();
				int n = Integer.parseInt(fontsize.getSelectedItem().toString());
				font = new Font(s, i, n);
				text.setFont(font);
			}
		});
		fontsize.addActionListener(new ActionListener() {

			@Override
			public void actionPerformed(ActionEvent e) {
				// TODO Auto-generated method stub
				String s = fontname.getSelectedItem().toString();
				int i = fontstyle.getSelectedIndex();
				int n = Integer.parseInt(fontsize.getSelectedItem().toString());
				font = new Font(s, i, n);
				text.setFont(font);
			}
		});
		fontstyle.addActionListener(new ActionListener() {

			@Override
			public void actionPerformed(ActionEvent e) {
				// TODO Auto-generated method stub
				String s = fontname.getSelectedItem().toString();
				int i = fontstyle.getSelectedIndex();
				int n = Integer.parseInt(fontsize.getSelectedItem().toString());
				font = new Font(s, i, n);
				text.setFont(font);
			}
		});
		b1.addActionListener(new ActionListener() {
			@Override
			public void actionPerformed(ActionEvent e) {
				// TODO Auto-generated method stub
				Color color = null;
				color = JColorChooser.showDialog(jf, "Choose Color", color);// ����һ����ɫѡ����
				text.setForeground(color);// �ı�������ɫ
			}
		});
		b2.addActionListener(new ActionListener() {
			@Override
			public void actionPerformed(ActionEvent e) {
				// TODO Auto-generated method stub
				Color color = null;
				color = JColorChooser.showDialog(jf, "Choose Color", color);// ����һ����ɫѡ����
				text.setBackground(color);
			}
		});
		JPanel jp = new JPanel(new GridLayout(5, 2));
		JLabel jl1 = new JLabel("��������");
		JLabel jl2 = new JLabel("�����С");
		JLabel jl3 = new JLabel("������ɫ");
		JLabel jl4 = new JLabel("������ɫ");
		JLabel jl5 = new JLabel("������ʽ");
		jp.add(jl1);
		jp.add(fontname);
		jp.add(jl2);
		jp.add(fontsize);
		jp.add(jl3);
		jp.add(fontstyle);
		jp.add(jl5);
		jp.add(b1);
		jp.add(jl4);
		jp.add(b2);
		jf1.add(jp);
		jf1.setVisible(true);
		jf1.setBounds(150, 100, 300, 300);
	}
}
