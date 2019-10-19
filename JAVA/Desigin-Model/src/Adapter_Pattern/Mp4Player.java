/**  
* <p>Title: Mp4Player.java</p>  
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
public class Mp4Player implements AdvancedMediaPlayer{

	@Override
	public void playVlc(String filename) {
		// TODO Auto-generated method stub
		
	}

	@Override
	public void playMp4(String filename) {
		// TODO Auto-generated method stub
		System.out.println("Playing mp4 file : "+ filename);
	}
	
}
