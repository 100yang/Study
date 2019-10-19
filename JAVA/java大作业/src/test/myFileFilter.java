/**  
* <p>Title: myFileFilter.java</p>  
* <p>Description: </p>  
* <p>Copyright: Copyright (c) 2018</p>    
* @author 100110100  
* @date 2018��12��18��  
* @version 1.0  
*/
package test;

import java.io.File;

import javax.swing.filechooser.FileFilter;

/**
 * <p>
 * Title: myFileFilter
 * </p>
 * <p>
 * Description: �����ļ�����
 * 
 * @author 100110100
 * @date 2018��12��18��
 */
public class myFileFilter extends FileFilter {

	/*
	 * (non-Javadoc)
	 * 
	 * <p>Title: accept</p>
	 * 
	 * <p>Description: </p>
	 * 
	 * @param f
	 * 
	 * @return
	 * 
	 * @see javax.swing.filechooser.FileFilter#accept(java.io.File)
	 * 
	 */
	String text;

	public myFileFilter(String s) {
		// TODO Auto-generated constructor stub
		text = s;
	}

	@Override
	public boolean accept(File file) {
		// TODO Auto-generated method stub
		if (file.isDirectory()) {
			return true;
		}
		String fileName = file.getName();
		int index = fileName.lastIndexOf('.');
		if (index > 0 && index < fileName.length() - 1) {
			// ��ʾ�ļ����Ʋ�Ϊ".xxx"��"xxx."֮����
			String extension = fileName.substring(index + 1).toLowerCase();
			// ����ץ�����ļ���չ����������������Ҫ��ʾ����չ��(������textֵ),�򷵻�true,��ʾ�����ļ���ʾ����,���򷵻�true.
			if (extension.equals(text))
				return true;
		}
		return false;
	}

	/*
	 * (non-Javadoc)
	 * 
	 * <p>Title: getDescription</p>
	 * 
	 * <p>Description: </p>
	 * 
	 * @return
	 * 
	 * @see javax.swing.filechooser.FileFilter#getDescription()
	 * 
	 */
	@Override
	public String getDescription() {
		// TODO Auto-generated method stub
		if (text.equals("java"))
			return "JAVA Source File(*.java)";
		else if (text.equals("class"))
			return "JAVA Class File(*.class)";
		else if (text.equals("txt"))
			return "Txt File(.txt)";
		else if (text.equals("docx"))
			return "Doc(*.docx)";
		else if (text.equals("mp3"))
			return "Mp3(*.mp3)";
		return null;
	}

}
