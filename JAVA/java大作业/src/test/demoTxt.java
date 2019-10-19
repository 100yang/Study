package test;

import javax.imageio.ImageIO;
import javax.swing.*;
import javax.swing.filechooser.FileFilter;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.WindowEvent;
import java.awt.print.PrinterException;
import java.io.BufferedReader;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
import java.nio.charset.Charset;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.Set;

/**
 * 
 * <p>
 * Title: demoTxt
 * </p>
 * <p>
 * Description: 写一个记事本
 * 
 * @author 100110100
 * @date 2018年12月17日
 */
public class demoTxt implements ActionListener {
	JFrame jf;
	JTextArea text;
	JScrollPane jsc;
	JFileChooser jfc;
	JPanel jp;
	final int x = 100;
	final int y = 100;
	final int width = 300;
	final int height = 300;
	String str_file = null;
	String getcodestyle = null;
	JMenu menu1, menu2, menu3, menu4, menu5;
	JMenuItem new_item, open_item, save_item, item_03, item_04, print_item, exit_item;
	JMenuItem cut_item, copy_item, paste_item, find_item, replace_item, selectall_item, setwrite_item;
	JMenuItem speak_item, setfont_item, viewdata_item, music_item, roll_item, clock_item;
	JMenuItem item_40, item_41, item_42;
	JMenuItem item_50, item_51, item_52, item_53;

	public demoTxt() {
		jf = new JFrame();
		jf.setTitle("DemoTxt");
		text = new JTextArea();
		text.setEditable(false);// 不可编辑
		text.setLineWrap(true);// 设置自动换行
		jsc = new JScrollPane(text);
		// 创建弹出菜单
		JPopupMenu popMenu = new JPopupMenu();
		popMenu.add("剪切").addActionListener(this);
		popMenu.addSeparator();
		popMenu.add("复制").addActionListener(this);
		popMenu.addSeparator();
		popMenu.add("粘贴").addActionListener(this);
		popMenu.add("查找").addActionListener(this);
		popMenu.addSeparator();
		popMenu.add("全选").addActionListener(this);
		text.setComponentPopupMenu(popMenu);
		/** 创建菜单栏 */
		JMenuBar menu = new JMenuBar();
		menu1 = new JMenu("文件");
		new_item = new JMenuItem("新建");
		new_item.setAccelerator(KeyStroke.getKeyStroke('N', java.awt.Event.CTRL_MASK, true));
		open_item = new JMenuItem("打开 ");
		open_item.setAccelerator(KeyStroke.getKeyStroke('O', java.awt.Event.CTRL_MASK, true));
		save_item = new JMenuItem("保存 ");
		save_item.setAccelerator(KeyStroke.getKeyStroke('S', java.awt.Event.CTRL_MASK, true));
		print_item = new JMenuItem("打印");
		print_item.setAccelerator(KeyStroke.getKeyStroke('P', java.awt.Event.CTRL_MASK, true));
		exit_item = new JMenuItem("退出");
		// 添加事件源
		new_item.addActionListener(this);
		// 打开
		jfc = new JFileChooser();
		open_item.addActionListener(new ActionListener() {
			@Override
			public void actionPerformed(ActionEvent e) {
				// TODO Auto-generated method stub
				Boolean flag = true;
				try {
					jfc.addChoosableFileFilter(new myFileFilter("txt"));
					jfc.addChoosableFileFilter(new myFileFilter("docx"));
					jfc.addChoosableFileFilter(new myFileFilter("class"));
					jfc.addChoosableFileFilter(new myFileFilter("java"));
					int result = jfc.showOpenDialog(jf);
					// 确定
					if (result == JFileChooser.APPROVE_OPTION) {
						str_file = jfc.getSelectedFile().getAbsolutePath();
//						System.out.print(str_file);
						BufferedReader bR = new BufferedReader(new FileReader(str_file));
						String str_line;
						while ((str_line = bR.readLine()) != null) {
							if (flag) {
								text.setText(str_line);
								flag = false;
							} else {
								text.setText(text.getText() + "\n" + str_line);
							}
						}
						bR.close();
					}
				} catch (FileNotFoundException e1) {
					e1.printStackTrace();
				} catch (IOException e2) {
					e2.printStackTrace();
				}
			}
		});
		// 打印
		print_item.addActionListener(this);
		// 退出
		exit_item.addActionListener(new ActionListener() {

			@Override
			public void actionPerformed(ActionEvent e) {
				// TODO Auto-generated method stub
				// 对话框 得到一条消息并确认
				int i = JOptionPane.showConfirmDialog(null, "是否真的退出文本阅读器", "退出确认", JOptionPane.YES_NO_CANCEL_OPTION);
				if (i == 0) {
					JOptionPane.showMessageDialog(jf, "感谢您的使用");
					System.exit(0);
				}
			}
		});
		menu1.add(new_item);
		menu1.add(open_item);
		menu1.addSeparator();
		menu1.add(print_item);
		menu1.addSeparator();
		menu1.add(exit_item);
		menu2 = new JMenu("编辑");
		cut_item = new JMenuItem("剪切");
		copy_item = new JMenuItem("复制");
		paste_item = new JMenuItem("粘贴");
		find_item = new JMenuItem("查找");
		replace_item = new JMenuItem("替换");
		selectall_item = new JMenuItem("全选");
		setwrite_item = new JMenuItem("设置文本可写");
		menu2.addSeparator();
		menu2.add(cut_item).addActionListener(this);
		menu2.addSeparator();
		menu2.add(copy_item).addActionListener(this);
		menu2.addSeparator();
		menu2.add(paste_item).addActionListener(this);
		menu2.addSeparator();
		menu2.add(find_item).addActionListener(this);
		menu2.addSeparator();
		menu2.add(replace_item);
		menu2.addSeparator();
		menu2.add(selectall_item).addActionListener(this);
		menu2.addSeparator();
		menu2.add(setwrite_item).addActionListener(new ActionListener() {
			@Override
			public void actionPerformed(ActionEvent e) {
				// TODO Auto-generated method stub
				if (e.getActionCommand() == "设置文本可写") {
					text.setEditable(true);
					setwrite_item.setText("设置文本不可写");
				} else {
					text.setEditable(false);
					setwrite_item.setText("设置文本可写");
				}
			}
		});
		menu3 = new JMenu("功能");
		speak_item = new JMenuItem("朗读");
		speak_item.addActionListener(this);
		setfont_item = new JMenuItem("设置字体");
		setfont_item.addActionListener(this);
		viewdata_item = new JMenuItem("查看日期");
		viewdata_item.addActionListener(this);
		music_item = new JMenuItem("放个音乐");
		music_item.addActionListener(this);
		roll_item = new JMenuItem("自动滚屏");
		roll_item.addActionListener(this);
		clock_item = new JMenuItem("闹钟");
		clock_item.addActionListener(this);
		menu3.add(speak_item);
		menu3.addSeparator();
		menu3.add(setfont_item);
		menu3.addSeparator();
		menu3.add(viewdata_item);
		menu3.addSeparator();
		menu3.add(music_item);
		menu3.addSeparator();
		menu3.add(roll_item);
		menu3.addSeparator();
		menu3.add(clock_item);
		// 获得Java支持编码集合
//		Set<String> charset = Charset.availableCharsets().keySet();
//		for(String s: charset)
//		{
//			System.out.println(s);
//		}
		//File file1 = new File("C:\\Users\\100110100\\Desktop\\新建文本文档.txt");
		//String s = FileCharsetDetector.getFileEncode(file1);
		//System.out.println(s);
		menu4 = new JMenu("编码");
		item_40 = new JMenuItem("转为UTF-8编码");
		item_41 = new JMenuItem("转为GBK编码");
		item_42 = new JMenuItem("转为Unicode编码");
		menu4.add(item_40).addActionListener(new ActionListener() {

			@Override
			public void actionPerformed(ActionEvent e) {
				// TODO Auto-generated method stub
				File file = jfc.getSelectedFile();
//				System.out.print(file);
				// 获取文件的编码格式
				try {
					getcodestyle = FileCharsetDetector.getFileEncode(file);
					System.out.println(getcodestyle);
				} catch (Exception e1) {
					// TODO Auto-generated catch block
					e1.printStackTrace();
				}
				if (getcodestyle != "UTF-8") {
					try {
						FileCharsetConverter.convert(file, getcodestyle, "UTF-8");
					} catch (Exception e1) {
						// TODO Auto-generated catch block
						e1.printStackTrace();
					}
				}
				Boolean flag = true;
				String str_line;
				try {
					BufferedReader bR = new BufferedReader(new FileReader(file));
					while ((str_line = bR.readLine()) != null) {
						if (flag) {
							text.setText(str_line);
							flag = false;
						} else {
							text.setText(text.getText() + "\n" + str_line);
						}
					}
					bR.close();
				} catch (FileNotFoundException e1) {
					e1.printStackTrace();
				} catch (IOException e2) {
					e2.printStackTrace();
				}
			}
		});
		menu4.addSeparator();
		menu4.add(item_41).addActionListener(new ActionListener() {
			@Override
			public void actionPerformed(ActionEvent e) {
				// TODO Auto-generated method stub
				File file = jfc.getSelectedFile();
//				System.out.print(file);
				// 获取文件的编码格式
				try {
					getcodestyle = FileCharsetDetector.getFileEncode(file);
					System.out.println(getcodestyle);
				} catch (Exception e1) {
					// TODO Auto-generated catch block
					e1.printStackTrace();
				}
				if (getcodestyle != "GBK") {
					try {
						FileCharsetConverter.convert(file, getcodestyle, "UTF-8");
					} catch (Exception e1) {
						// TODO Auto-generated catch block
						e1.printStackTrace();
					}
				}
				Boolean flag = true;
				String str_line;
				try {
					BufferedReader bR = new BufferedReader(new FileReader(file));
					while ((str_line = bR.readLine()) != null) {
						if (flag) {
							text.setText(str_line);
							flag = false;
						} else {
							text.setText(text.getText() + "\n" + str_line);
						}
					}
					bR.close();
				} catch (FileNotFoundException e1) {
					e1.printStackTrace();
				} catch (IOException e2) {
					e2.printStackTrace();
				}
			}
		});
		menu4.addSeparator();
		menu4.add(item_42).addActionListener(new ActionListener() {

			@Override
			public void actionPerformed(ActionEvent e) {
				// TODO Auto-generated method stub
				File file = jfc.getSelectedFile();
				// 获取文件的编码格式
				try {
					getcodestyle = FileCharsetDetector.getFileEncode(file);
					System.out.println(getcodestyle);
				} catch (Exception e1) {
					// TODO Auto-generated catch block
					e1.printStackTrace();
				}
				if (getcodestyle != "Unicode") {
					try {
						FileCharsetConverter.convert(file, getcodestyle, "UTF-8");
					} catch (Exception e1) {
						// TODO Auto-generated catch block
						e1.printStackTrace();
					}
				}
				Boolean flag = true;
				String str_line;
				try {
					BufferedReader bR = new BufferedReader(new FileReader(file));
					while ((str_line = bR.readLine()) != null) {
						if (flag) {
							text.setText(str_line);
							flag = false;
						} else {
							text.setText(text.getText() + "\n" + str_line);
						}
					}
					bR.close();
				} catch (FileNotFoundException e1) {
					e1.printStackTrace();
				} catch (IOException e2) {
					e2.printStackTrace();
				}
			}
		});
		menu5 = new JMenu("帮助");
		item_50 = new JMenuItem("联系作者");
		item_51 = new JMenuItem("关于");
		menu5.add(item_50);
		item_50.addActionListener(new ActionListener() {

			@Override
			public void actionPerformed(ActionEvent e) {
				// TODO Auto-generated method stub
				JOptionPane.showMessageDialog(jf, "qq: 1989152546 tel: this a secret", "欢迎您的反馈",
						JOptionPane.INFORMATION_MESSAGE);
			}
		});
		menu5.addSeparator();
		menu5.add(item_51);
		item_51.addActionListener(new ActionListener() {
			@Override
			public void actionPerformed(ActionEvent e) {
				// TODO Auto-generated method stub
				JOptionPane.showMessageDialog(jf, "版本1.0    作者：100110100", "软件说明", JOptionPane.INFORMATION_MESSAGE);

			}
		});
		menu.add(menu1);
		menu.add(menu2);
		menu.add(menu3);
		menu.add(menu4);
		menu.add(menu5);
		jf.setJMenuBar(menu);
		jf.add(jsc);
		jf.setBounds(x, y, width, height);
		jf.setVisible(true);
		jf.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	}

	public static void main(String[] args) {
		Mypanel mp;
		JFrame k;
		mp = new Mypanel();
		try {
			k = new JFrame();
			k.setTitle("欢迎使用本小说阅读器");
			k.add(mp);
			k.setBounds(500, 200, 500, 400);
			k.setVisible(true);
			Thread.sleep(2000);
			k.setVisible(false);
		} catch (InterruptedException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		new demoTxt();
	}

	/*
	 * (non-Javadoc)
	 * 
	 * <p> Title: actionPerformed </p>
	 * 
	 * <p> Description: </p>
	 * 
	 * @param e
	 * 
	 * @see
	 * java.awt.event.ActionListener#actionPerformed(java.awt.event.ActionEvent)
	 * 
	 */
	@Override
	public void actionPerformed(ActionEvent e) {
		// TODO Auto-generated method stub
		if (e.getSource() == "粘贴") {
			text.paste();
		} else if (e.getSource() == "复制") {
			text.copy();
		} else if (e.getSource() == "剪切") {
			text.cut();
		} else if (e.getSource() == "查找") {
			new findchar(jf, text);
		} else if (e.getSource() == "全选") {
			text.selectAll();
		} else if (e.getSource() == new_item) {
			new demoTxt();
		} else if (e.getSource() == print_item) {
			try {
				text.print();
			} catch (PrinterException e1) {
				// TODO Auto-generated catch block
				e1.printStackTrace();
			}
		} else if (e.getSource() == cut_item) {
			text.cut();
		} else if (e.getSource() == copy_item) {
			text.copy();
		} else if (e.getSource() == paste_item) {
			text.paste();
		} else if (e.getSource() == find_item) {
			new findchar(jf, text);
		} else if (e.getSource() == replace_item) {
			// 替换
		} else if (e.getSource() == selectall_item) {
			text.selectAll();
		} else if (e.getSource() == speak_item) {
			new Speaktext(text).start();
		} else if (e.getSource() == setfont_item) {
			new FontChange(text, jf);
		} else if (e.getSource() == viewdata_item) {
			new ShowData();
		} else if (e.getSource() == music_item) {
			File music = null;
			JFileChooser jfc1 = new JFileChooser("F:\\音乐");
			int k = jfc1.showOpenDialog(jf);
			if (k == JFileChooser.APPROVE_OPTION) {
				music = jfc1.getSelectedFile();
				new PlayMusic(music);
			}
		} else if (e.getSource() == roll_item) {
			new roll(text, jsc);
		} else if (e.getSource() == clock_item) {
			new clocks();
		}
	}
}

class Mypanel extends JPanel {
	Image image = null;
	public void paint(Graphics g) {
		try {
			image = ImageIO.read(new File("E:\\IU.jpg"));
			g.drawImage(image, 0, 0, 500, 400, null);
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}

	}
}