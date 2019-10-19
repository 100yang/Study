/**  
* <p>Title: Calculator.java</p>  
* <p>Description: </p>  
* <p>Copyright: Copyright (c) 2019</p>    
* @author yang
* @date Jun 6, 2019  
* @version 1.0  
*/
package soft;

import java.awt.BorderLayout;
import java.awt.Button;
import java.awt.Font;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JTextField;

/**
 * 
 */
public class Calculator {
	JFrame jf;
	JPanel jp;
	JLabel jLabel, jLabel2;
	JTextField textField;
	Font font;
	Button button;
	int ans;

	public Calculator() {
		font = new Font("宋体", Font.BOLD, 16);
		jf = new JFrame();
		jf.setTitle("计算器小工具");
		jf.setBounds(320, 200, 520, 210);
		jp = new JPanel();
		// jp.setLayout(new BorderLayout());
		textField = new JTextField(26);
		jLabel = new JLabel("请输入要计算的式子:");
		String strMsg1 = "请注意：目前只支持中缀表达式形式的输入 且保证输入式子的正确性";
		String strMsg2 = "且只支持 + - * /  ";
		String strMsg3 = " ";
		String strMsg = "<html><body>" + strMsg1 + "<br>" + strMsg2 + "<br>" + strMsg3 + "<body></html>";
		jLabel2 = new JLabel(strMsg);
		button = new Button("计算");
		button.setFont(font);
		button.addActionListener(new ActionListener() {
			@Override
			public void actionPerformed(ActionEvent e) {
				// TODO Auto-generated method stub
				new Doit(textField, jf);
			}
		});
		jLabel.setFont(font);
		jLabel2.setFont(font);
		jp.add(jLabel);
		jp.add(textField);
		jp.add(button);
		jp.add(jLabel2);
		jf.add(jp);
		jf.setVisible(true);
	}
}
