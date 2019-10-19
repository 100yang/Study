/**  
* <p>Title: AudioPlayer.java</p>  
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
public class AudioPlayer implements MediaPlayer{
	MediaAdapter mediaAdapter; 
	@Override
	public void play(String audioType, String fileName) {
		// TODO Auto-generated method stub
		 //播放 mp3 音乐文件的内置支持
	      if(audioType.equalsIgnoreCase("mp3")){
	         System.out.println("Playing mp3 file. Name: "+ fileName);         
	      } 
	      //mediaAdapter 提供了播放其他文件格式的支持
	      else if(audioType.equalsIgnoreCase("vlc") 
	         || audioType.equalsIgnoreCase("mp4")){
	         mediaAdapter = new MediaAdapter(audioType);
	         mediaAdapter.play(audioType, fileName);
	      }
	      else{
	         System.out.println("Invalid media. "+
	            audioType + " format not supported");
	      }
	}
	
}
