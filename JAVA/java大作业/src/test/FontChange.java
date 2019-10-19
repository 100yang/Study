/**  
* <p>Title: FontChange.java</p>  
* <p>Description: </p>  
* <p>Copyright: Copyright (c) 2017</p>  
* <p>Company: www.baidudu.com</p>  
* @author 100110100  
* @date 2018年12月17日  
* @version 1.0  
*/
package test;

/**  
* <p>Title: FontChange</p>  
* <p>Description: 用于字体颜色 大小 样式的改变  
* @author 100110100  
* @date 2018年12月17日  
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
	String[] style = { "正常", "粗体", "斜体", "粗斜体" };
	final String[] sizearr = { "8", "9", "10", "12", "14", "16", "18", "20", "24", "28", "32", "36", "40", "44", "48",
			"54", "60", "66", "72", "80", "88", "99" };

	public FontChange(JTextArea text, JFrame jf) {
		/*
		 * GraphicsEnvironment 类描述了 Java(tm) 应用程序在特定平台上可用的 GraphicsDevice 对象和 Font
		 * 对象的集合。
		 */
		JFrame jf1 = new JFrame();
		jf1.setTitle("字体改变");
		GraphicsEnvironment env = GraphicsEnvironment.getLocalGraphicsEnvironment();
		// 获取系统中安装的所有字体的家族名
		fontarr = env.getAvailableFontFamilyNames();
		fontname = new JComboBox(fontarr);
		fontsize = new JComboBox(sizearr);
		fontstyle = new JComboBox(style);
		fontname.setEditable(true);
		fontsize.setEditable(true);
		fontsize.setEditable(true);
		b1 = new JButton("字体颜色");
		b2 = new JButton("背景颜色");
		fontname.setSelectedItem("宋体");
		fontsize.setSelectedItem("23");
		/* 获取选择的字体 字体大小 */
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
				color = JColorChooser.showDialog(jf, "Choose Color", color);// 创建一个颜色选择器
				text.setForeground(color);// 改变字体颜色
			}
		});
		b2.addActionListener(new ActionListener() {
			@Override
			public void actionPerformed(ActionEvent e) {
				// TODO Auto-generated method stub
				Color color = null;
				color = JColorChooser.showDialog(jf, "Choose Color", color);// 创建一个颜色选择器
				text.setBackground(color);
			}
		});
		JPanel jp = new JPanel(new GridLayout(5, 2));
		JLabel jl1 = new JLabel("字体名字");
		JLabel jl2 = new JLabel("字体大小");
		JLabel jl3 = new JLabel("字体颜色");
		JLabel jl4 = new JLabel("背景颜色");
		JLabel jl5 = new JLabel("字体样式");
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
