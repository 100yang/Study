/**  
* <p>Title: myFileFilter.java</p>  
* <p>Description: </p>  
* <p>Copyright: Copyright (c) 2018</p>    
* @author 100110100  
* @date 2018年12月18日  
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
 * Description: 过滤文件类型
 * 
 * @author 100110100
 * @date 2018年12月18日
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
			// 表示文件名称不为".xxx"现"xxx."之类型
			String extension = fileName.substring(index + 1).toLowerCase();
			// 若所抓到的文件扩展名等于我们所设置要显示的扩展名(即变量text值),则返回true,表示将此文件显示出来,否则返回true.
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
