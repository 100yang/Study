/**  
* <p>Title: PlayMusic.java</p>  
* <p>Description: </p>  
* <p>Copyright: Copyright (c) 2018</p>    
* @author 100110100  
* @date 2018年12月19日  
* @version 1.0  
*/
package test;

import javazoom.jl.decoder.JavaLayerException;
import javazoom.jl.player.*;
import java.awt.BorderLayout;
import java.awt.FlowLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.WindowEvent;
import java.io.BufferedInputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;

import javax.swing.JButton;
import javax.swing.JFileChooser;
import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.JSlider;
import javax.swing.JTextArea;
import javax.swing.event.AncestorEvent;
import javax.swing.event.AncestorListener;


public class PlayMusic extends Thread implements ActionListener {
	JFrame jf;
	Player player;
	File music;
	JFileChooser jfc;
	JTextArea text;
	JButton open_button;
	JButton play_button, stop_button, pre_button, next_button;
	JPanel jp1, jp2, jp3;
	JSlider js1;
	int flag = 0;

	public PlayMusic(File mp3) {
		this.music = mp3;
		text = new JTextArea();
		text.setText(music.getName());
		jf = new JFrame();
		jf.setTitle("音乐播放器");
		open_button = new JButton("打开");
		play_button = new JButton("播放");
		stop_button = new JButton("暂停");
		pre_button = new JButton("上一首");
		next_button = new JButton("下一首");
		jfc = new JFileChooser();
		open_button.addActionListener(this);
		play_button.addActionListener(this);
		stop_button.addActionListener(this);
		jp1 = new JPanel();
		jp1.add(open_button);
		jp1.add(play_button);
		jp1.add(stop_button);
		jp2 = new JPanel();
		jp2.add(pre_button);
		jp2.add(next_button);
		jp3 = new JPanel();
		jp3.add(text);
		jf.add(jp1, BorderLayout.NORTH);
		jf.add(jp2, BorderLayout.SOUTH);
		jf.add(jp3, BorderLayout.CENTER);
		jf.setBounds(200, 300, 300, 300);
		jf.setVisible(true);
	}

	public void windowClosing(WindowEvent e) {
		jf.dispose();
	}
	@Override
	public void run() {
		try {
			play();
		} catch (FileNotFoundException | JavaLayerException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}
	// 播放方法
	public void play() throws FileNotFoundException, JavaLayerException {

		BufferedInputStream buffer = new BufferedInputStream(new FileInputStream(music));
		player = new Player(buffer);
		player.play();
	}

	@Override
	public void actionPerformed(ActionEvent e) {
		// TODO Auto-generated method stub
		if (e.getSource() == open_button) {
			int k = jfc.showOpenDialog(jf);
			if (k == JFileChooser.APPROVE_OPTION) {
				music = jfc.getSelectedFile();
				String str = music.getAbsolutePath();
				text.setText(text.getText() + '\n' + str);
			}
		} else if (e.getSource() == play_button) {
			start();
		} else if (e.getSource() == stop_button) {
			player.close();//interrupt();
		}
	}
}
