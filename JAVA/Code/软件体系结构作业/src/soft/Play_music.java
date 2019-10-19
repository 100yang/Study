package soft;
import java.io.BufferedInputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.sql.Time;

import javazoom.jl.decoder.JavaLayerException;
import javazoom.jl.player.Player;

public class Play_music extends Thread {
	Player player;
	File music = new File("/home/yang/Music/CloudMusic/陈粒 - 四海.mp3");
	public Play_music() {
		try {
			play();
		} catch (FileNotFoundException e1) {
			// TODO Auto-generated catch block
			e1.printStackTrace();
		} catch (JavaLayerException e1) {
			// TODO Auto-generated catch block
			e1.printStackTrace();
		}
	}
	private void extracted() {
		stop();
	}
	public void run() {
		super.run();
		try {
			play();
		} catch (FileNotFoundException | JavaLayerException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}
	 public void play() throws FileNotFoundException, JavaLayerException {
	        
         BufferedInputStream buffer =
                 new BufferedInputStream(new FileInputStream(music));
         player = new Player(buffer);
         player.play();
 }
}
