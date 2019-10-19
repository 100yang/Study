package soft;

import java.sql.*;
import java.awt.Font;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.Box;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JPanel;
import javax.swing.JPasswordField;
import javax.swing.JTextField;

public class register {
	final String JDBC_DRIVER = "com.mysql.jdbc.Driver";
	final String DB_URL = "jdbc:mysql://localhost:3306/homework?useSSL=false";
	final String USER = "root";
	final String PASS = "dowhile0";
	final String sql = "insert into register values (?,?,?)";
	Connection conn = null;
	JFrame jf;
	JPanel jp;
	// JLabel lab1,lab2,lab3,lab4;
	JTextField name, mail;
	JPasswordField password1, password2;
	JButton button;
	Font font, font2;
	Box boxV1, boxV2, baseBox;

	public register() {
		font = new Font("宋体", Font.BOLD, 14);
		jf = new JFrame("用户注册");
		jp = new JPanel();
		boxV1 = Box.createVerticalBox();
		boxV1.add(new JLabel("Nickname:"));
		boxV1.add(Box.createVerticalStrut(8));
		boxV1.add(new JLabel("Password:"));
		boxV1.add(Box.createVerticalStrut(8));
		boxV1.add(new JLabel("Confirm Password:"));
		boxV1.add(Box.createVerticalStrut(8));
		boxV1.add(new JLabel("Email:"));
		boxV2 = Box.createVerticalBox();
		name = new JTextField(16);
		boxV2.add(name);
		boxV2.add(Box.createVerticalStrut(8));
		password1 = new JPasswordField(16);
		boxV2.add(password1);
		boxV2.add(Box.createVerticalStrut(8));
		password2 = new JPasswordField(16);
		boxV2.add(password2);
		boxV2.add(Box.createVerticalStrut(8));
		mail = new JTextField(16);
		boxV2.add(mail);
		baseBox = Box.createHorizontalBox();
		baseBox.add(boxV1);
		baseBox.add(Box.createHorizontalStrut(10));
		baseBox.add(boxV2);
		jp.add(baseBox);
		button = new JButton("注册");
		button.addActionListener(new ActionListener() {
			@Override
			public void actionPerformed(ActionEvent e) {
				// TODO Auto-generated method stub
				if (check(password1, password2, name, mail) == true) {
					insert();
					JOptionPane.showMessageDialog(jf, "注册成功");
					jf.dispose();
				} else {
					JOptionPane.showMessageDialog(jf, "您的输入有误，请重新输入！！");
				}
			}
		});
		jp.add(button);
		jf.add(jp);
//		jf.setSize(350, 300);
		jf.setBounds(300, 300, 350, 300);
		jf.setVisible(true);
	}

	boolean check(JPasswordField password1, JPasswordField password2, JTextField name, JTextField mail) {
		String p1 = String.valueOf(password1.getPassword());
		String p2 = String.valueOf(password2.getPassword());
		String namestring = String.valueOf(name.getText());
		String mailstring = String.valueOf(mail.getText());
		if (check_repeat(name) == true) {
			JOptionPane.showMessageDialog(jf, "该用户名已经注册，请重新输入");
			return false;
		}
		if (p1.compareTo(p2) != 0) {
			password1.setText("");
			password2.setText("");
			JOptionPane.showMessageDialog(jf, "您两次输入的密码不匹配，请重新输入");
			return false;
		}
		byte[] buff = p1.getBytes();
		byte[] buff2 = mailstring.getBytes();
		byte[] buff3 = namestring.getBytes();
		int len = buff.length;
		int len2 = buff2.length;
		int len3 = buff3.length;
		if (len > 20 || len2 > 20 || len3 > 20)
			return false;
		return true;
	}

	public void insert() {
		// Connection conn = null;
		PreparedStatement stmt = null;
		try {
			// 注册 JDBC 驱动
			Class.forName("com.mysql.jdbc.Driver");
			// 打开链接
			// System.out.println("连接数据库...");
			conn = DriverManager.getConnection(DB_URL, USER, PASS);
			String namestring = String.valueOf(name.getText());
			String passwordString = String.valueOf(password2.getPassword());
			String mailstring = String.valueOf(mail.getText());
			stmt = (PreparedStatement) conn.prepareStatement(sql);
			stmt.setString(1, namestring);
			stmt.setString(2, passwordString);
			stmt.setString(3, mailstring);
			stmt.executeUpdate();
			// 完成后关闭
			stmt.close();
			conn.close();
		} catch (SQLException se) {
			// 处理 JDBC 错误
			se.printStackTrace();
		} catch (Exception e) {
			// 处理 Class.forName 错误
			e.printStackTrace();
		} finally {
			// 关闭资源
			try {
				if (stmt != null)
					stmt.close();
			} catch (SQLException se2) {
			} // 什么都不做
			try {
				if (conn != null)
					conn.close();
			} catch (SQLException se) {
				se.printStackTrace();
			}
		}
	}

	public boolean check_repeat(JTextField name) {
		Statement stmt = null;
		int cnt = 0;
		String nameString = String.valueOf(name.getText());
		try {
			// 注册 JDBC 驱动
			Class.forName("com.mysql.jdbc.Driver");
			// 打开链接
			// System.out.println("连接数据库...");
			conn = DriverManager.getConnection(DB_URL, USER, PASS);
			// 执行查询
			// System.out.println(" 实例化Statement对象...");
			stmt = conn.createStatement();
			String sql;
			sql = "SELECT register_name, password FROM register";
			ResultSet rs = stmt.executeQuery(sql);
			// 搜索数据库
			while (rs.next()) {
				String register_name1 = rs.getString("register_name");
				// String password1 = rs.getString("password");
				if (register_name1.compareTo(nameString) == 0 && cnt == 0) {
					cnt = 1;
				}
			}
			// 完成后关闭
			rs.close();
			stmt.close();
			conn.close();
		} catch (SQLException se) {
			// 处理 JDBC 错误
			se.printStackTrace();
		} catch (Exception e) {
			// 处理 Class.forName 错误
			e.printStackTrace();
		} finally {
			// 关闭资源
			try {
				if (stmt != null)
					stmt.close();
			} catch (SQLException se2) {
			} // 什么都不做
			try {
				if (conn != null)
					conn.close();
			} catch (SQLException se) {
				se.printStackTrace();
			}
		}
		if (cnt == 1) {
			return true;
		} else {
			return false;
		}
	}
}
