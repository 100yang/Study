/**  
* <p>Title: BinaryObserver.java</p>  
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
public class BinaryObserver extends Observer{

	public BinaryObserver(Subject subject) {
		this.subject = subject;
		this.subject.attach(this);
	}
	@Override
	public void update() {
		// TODO Auto-generated method stub
		System.out.println("Binary String: "+ Integer.toBinaryString(subject.getState()));
	}

}
