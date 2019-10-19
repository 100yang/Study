/**  
* <p>Title: findchar.java</p>  
* <p>Description: </p>  
* <p>Copyright: Copyright (c) 2018</p>    
* @author 100110100  
* @date 2018年12月21日  
* @version 1.0  
*/
package test;

import java.awt.Container;
import java.awt.FlowLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.ButtonGroup;
import javax.swing.JButton;
import javax.swing.JCheckBox;
import javax.swing.JDialog;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JPanel;
import javax.swing.JRadioButton;
import javax.swing.JTextArea;
import javax.swing.JTextField;

/**
 * <p>
 * Title: findchar
 * </p>
 * <p>
 * Description: 查找字符内容
 * 
 * @author 100110100
 * @date 2018年12月21日
 */
public class findchar extends JDialog implements ActionListener {
	Container con;
	JPanel panel1, panel2;
	JTextArea text;
	JLabel label1;
	JTextField findEdit;
	JCheckBox checkBox;
	JRadioButton upBtn, downBtn;
	ButtonGroup dirBtnGroup;
	JButton OKBtn, CancleBtn;
	int start; // 标志开始查找的位置

	public findchar(JFrame jf, JTextArea Jtext) {
		super(jf, false); // 以非摸态方式创建对话框
		start = 0;
		text = Jtext;
		panel1 = new JPanel();
		panel1.setLayout(new FlowLayout());
		panel2 = new JPanel();
		panel2.setLayout(new FlowLayout());
		label1 = new JLabel("查找内容");
		findEdit = new JTextField(12);
		OKBtn = new JButton("查找下一个");
		OKBtn.addActionListener(this);
		panel1.add(label1);
		panel1.add(findEdit);
		panel1.add(OKBtn);
		checkBox = new JCheckBox("区分大小写");
		checkBox.setSelected(true);
		upBtn = new JRadioButton("向上");
		downBtn = new JRadioButton("向下", true);
		dirBtnGroup = new ButtonGroup();
		dirBtnGroup.add(upBtn);
		dirBtnGroup.add(downBtn);
		CancleBtn = new JButton("取消");
		CancleBtn.addActionListener(this);
		panel2.add(checkBox);
		panel2.add(upBtn);
		panel2.add(downBtn);
		panel2.add(CancleBtn);
		con = getContentPane();
		con.setLayout(new FlowLayout());
		con.add(panel1);
		con.add(panel2);
		setTitle("查找");
		setSize(300, 120);
		setVisible(true);
	}

//响应按钮单击事件
	public void actionPerformed(ActionEvent e) {
		if (e.getSource() == OKBtn) {
			find();
		} else {
			dispose();
		}
	}

//本方法没有从前往后找，区分大小写
	public void find() {
		int index;
//指定开始查找的位置，从上次找到的位置或是光标位置开始查找
		if (start > text.getCaretPosition())
			start = text.getCaretPosition();
//直接利用 String 的匹配功能，但该功能是区分大大小写的
		index = text.getText().indexOf(findEdit.getText(), start);
		if (index < 0) {
			JOptionPane.showMessageDialog(this, "查找完毕");
			start = 0;
		} else // 如果找到，显示找到的位置
		{
			text.setSelectionStart(index);
			text.setSelectionEnd(index + findEdit.getText().length());
//设置下一次开始查找的位置
			start = index + findEdit.getText().length();
		}
	}
}
