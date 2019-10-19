/**  
* <p>Title: VlcPlayer.java</p>  
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
public class VlcPlayer implements AdvancedMediaPlayer{

	@Override
	public void playVlc(String filename) {
		// TODO Auto-generated method stub
		System.out.println("Playing vlc file : " + filename);
	}

	@Override
	public void playMp4(String filename) {
		// TODO Auto-generated method stub
		
	}

}
