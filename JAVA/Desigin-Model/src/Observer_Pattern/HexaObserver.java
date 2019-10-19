/**  
* <p>Title: HexaObserver.java</p>  
* <p>Description: </p>  
* <p>Copyright: Copyright (c) 2019</p>    
* @author 100110100  
* @date Apr 21, 2019  
* @version 1.0  
*/  
package Observer_Pattern;

/**
 * Description
 */
public class HexaObserver extends Observer{

	public HexaObserver(Subject subject) {
		this.subject = subject;
		this.subject.attach(this);
	}
	@Override
	public void update() {
		// TODO Auto-generated method stub
		System.out.println("Hexa String: "+ Integer.toHexString(subject.getState()));
	}

}
