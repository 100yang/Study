/**  
* <p>Title: findchar.java</p>  
* <p>Description: </p>  
* <p>Copyright: Copyright (c) 2018</p>    
* @author 100110100  
* @date 2018��12��21��  
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
 * Description: �����ַ�����
 * 
 * @author 100110100
 * @date 2018��12��21��
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
	int start; // ��־��ʼ���ҵ�λ��

	public findchar(JFrame jf, JTextArea Jtext) {
		super(jf, false); // �Է���̬��ʽ�����Ի���
		start = 0;
		text = Jtext;
		panel1 = new JPanel();
		panel1.setLayout(new FlowLayout());
		panel2 = new JPanel();
		panel2.setLayout(new FlowLayout());
		label1 = new JLabel("��������");
		findEdit = new JTextField(12);
		OKBtn = new JButton("������һ��");
		OKBtn.addActionListener(this);
		panel1.add(label1);
		panel1.add(findEdit);
		panel1.add(OKBtn);
		checkBox = new JCheckBox("���ִ�Сд");
		checkBox.setSelected(true);
		upBtn = new JRadioButton("����");
		downBtn = new JRadioButton("����", true);
		dirBtnGroup = new ButtonGroup();
		dirBtnGroup.add(upBtn);
		dirBtnGroup.add(downBtn);
		CancleBtn = new JButton("ȡ��");
		CancleBtn.addActionListener(this);
		panel2.add(checkBox);
		panel2.add(upBtn);
		panel2.add(downBtn);
		panel2.add(CancleBtn);
		con = getContentPane();
		con.setLayout(new FlowLayout());
		con.add(panel1);
		con.add(panel2);
		setTitle("����");
		setSize(300, 120);
		setVisible(true);
	}

//��Ӧ��ť�����¼�
	public void actionPerformed(ActionEvent e) {
		if (e.getSource() == OKBtn) {
			find();
		} else {
			dispose();
		}
	}

//������û�д�ǰ�����ң����ִ�Сд
	public void find() {
		int index;
//ָ����ʼ���ҵ�λ�ã����ϴ��ҵ���λ�û��ǹ��λ�ÿ�ʼ����
		if (start > text.getCaretPosition())
			start = text.getCaretPosition();
//ֱ������ String ��ƥ�书�ܣ����ù��������ִ��Сд��
		index = text.getText().indexOf(findEdit.getText(), start);
		if (index < 0) {
			JOptionPane.showMessageDialog(this, "�������");
			start = 0;
		} else // ����ҵ�����ʾ�ҵ���λ��
		{
			text.setSelectionStart(index);
			text.setSelectionEnd(index + findEdit.getText().length());
//������һ�ο�ʼ���ҵ�λ��
			start = index + findEdit.getText().length();
		}
	}
}
