package soft;

import java.awt.BorderLayout;
import java.awt.Component;
import java.awt.FlowLayout;
import java.awt.Font;
import java.awt.Graphics;
import java.awt.GridLayout;
import java.awt.Image;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.nio.channels.NonWritableChannelException;
import java.sql.*;

import javax.swing.Box;
import javax.swing.BoxLayout;
import javax.swing.ImageIcon;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JPanel;
import javax.swing.JPasswordField;
import javax.swing.JTextArea;
import javax.swing.JTextField;

public class login {
	// JDBC 驱动名及数据库 URL
	final String JDBC_DRIVER = "com.mysql.jdbc.Driver";
	final String DB_URL = "jdbc:mysql://localhost:3306/homework?useSSL=false";
	final String USER = "root";
	final String PASS = "dowhile0";
	static JFrame jf;
	JPasswordField password;
	JPanel jp, jPanel, jPanel2, jPanel3;
	JLabel lab1, lab2, lab3, lab4;
	JTextField name;
	JPasswordField passwordField;
	JButton button, button2, button1;
	Font font, font2;
	Image img;
	Box boxV1, boxV2, baseBox;

	public login() {
		font = new Font("楷体", Font.BOLD, 16);
		jf = new JFrame();
		jf.setLayout(new BorderLayout());
		jp = new JPanel();
		jPanel = new JPanel();
		jPanel2 = new JPanel();
		jPanel3 = new JPanel();	
		jPanel3.setLayout(new BorderLayout());
		// jPanel.setLayout();
		jf.setTitle("用户登录");
		jf.setBounds(500, 266, 330, 180);
		lab1 = new JLabel("Nickname:");
		lab1.setFont(font);
		lab2 = new JLabel("Password:");
		lab2.setFont(font);
		name = new JTextField(18);
		name.setText("100110100");
		passwordField = new JPasswordField(18);
		passwordField.setText("123");
		boxV1 = Box.createVerticalBox();
		boxV1.add(lab1);
		boxV1.add(Box.createVerticalStrut(8));
		boxV1.add(lab2);
		boxV1.add(Box.createVerticalStrut(8));
		boxV2 = Box.createVerticalBox();
		boxV2.add(name);
		boxV2.add(Box.createVerticalStrut(8));
		boxV2.add(passwordField);
		boxV2.add(Box.createVerticalStrut(8));
		baseBox = Box.createHorizontalBox();
		baseBox.add(boxV1);
		baseBox.add(Box.createHorizontalStrut(10));
		baseBox.add(boxV2);
		jp.add(baseBox);
		jPanel3.add("North", jp);
		button = new JButton("登录");
		jPanel2.add(button);
		jPanel3.add("Center", jPanel2);
		button.addActionListener(new ActionListener() {
			@Override
			public void actionPerformed(ActionEvent e) {
				// TODO Auto-generated method stub
				// String passwordString = String.valueOf(passwordField.getPassword());
				// System.out.println(passwordString);
				if (check(name, passwordField) == true) {
					// JOptionPane.showMessageDialog(jf, "欢迎回来");
					new Calculator();
				} else {
					passwordField.setText("");
					JOptionPane.showMessageDialog(jf, "用户名或密码输入不正确，请重新输入！！");
				}
			}
		});
		button1 = new JButton("忘记密码？");
		button1.addActionListener(new ActionListener() {

			@Override
			public void actionPerformed(ActionEvent e) {
				// TODO Auto-generated method stub
				JOptionPane.showMessageDialog(jf, "抱歉，本应用暂时没有这个功能，敬请期待");
			}
		});
		jPanel.add(button1);
		button2 = new JButton("用户注册");
		jPanel.add(button2);
		button2.addActionListener(new ActionListener() {

			@Override
			public void actionPerformed(ActionEvent e) {
				// TODO Auto-generated method stub
				new register();
			}
		});
		jPanel3.add("South", jPanel);
		jf.add("North", jPanel3);
	}

	public static void main(String[] args) {
		new login();
		jf.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		jf.setVisible(true);
	}

	boolean check(JTextField name2, JPasswordField passwordField2) {
		String name = String.valueOf(name2.getText());
		String password = String.valueOf(passwordField2.getPassword());
		Connection conn = null;
		Statement stmt = null;
		int cnt = 0;
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
				String password1 = rs.getString("password");
				if (register_name1.compareTo(name) == 0 && password1.compareTo(password) == 0 && cnt == 0) {
					cnt = 1;
					// return true;
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
		if (cnt == 0)
			return false;
		return true;
	}
}