/**  
* <p>Title: MediaAdapter.java</p>  
* <p>Description: </p>  
* <p>Copyright: Copyright (c) 2019</p>    
* @author 100110100  
* @date Apr 19, 2019  
* @version 1.0  
*/  
package Adapter_Pattern;

/**
 * Description
 */
public class MediaAdapter implements MediaPlayer{
	
	AdvancedMediaPlayer advancedMusicPlayer;
	public MediaAdapter(String audioType) {
		if(audioType.equalsIgnoreCase("vlc")) {
			advancedMusicPlayer = new VlcPlayer();
		}
		else if(audioType.equalsIgnoreCase("mp4")) {
			advancedMusicPlayer = new Mp4Player();
		}
	}
	@Override
	public void play(String audioType, String fileName) {
		// TODO Auto-generated method stub
		if(audioType.equalsIgnoreCase("vlc")) {
			advancedMusicPlayer.playVlc(fileName);
		}
		else if(audioType.equalsIgnoreCase("mp4")) {
			advancedMusicPlayer.playMp4(fileName);;
		}
	}
	
}
