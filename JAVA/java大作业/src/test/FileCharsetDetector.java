/**  
* <p>Title: test6.java</p>  
* <p>Description: </p>  
* <p>Copyright: Copyright (c) 2018</p>    
* @author 100110100  
* @date 2018年12月20日  
* @version 1.0  
*/  
package test;

/**  
* <p>Title: test6</p>  
* <p>Description: 得到文件的编码 
* @author 100110100  
* @date 2018年12月20日  
*/

import info.monitorenter.cpdetector.io.ASCIIDetector;  
import info.monitorenter.cpdetector.io.CodepageDetectorProxy;  
import info.monitorenter.cpdetector.io.JChardetFacade;  
import info.monitorenter.cpdetector.io.ParsingDetector;  
import info.monitorenter.cpdetector.io.UnicodeDetector;  
  
import java.io.File;
import java.io.FileInputStream;
import java.io.InputStream;
import java.nio.charset.Charset;  
import java.io.BufferedInputStream;  
import java.io.BufferedOutputStream;  
  
public class FileCharsetDetector {  
  
    /** 
             *      利用第三方开源包cpdetector获取文件编码格式. 
     * @param filePath 
     * @return 
     */  
    public static String getFileEncode(File file) {  
        /** 
         * <pre> 
         * 1、cpDetector内置了一些常用的探测实现类,这些探测实现类的实例可以通过add方法加进来, 
         * 如:ParsingDetector、 JChardetFacade、ASCIIDetector、UnicodeDetector.  
         * 2、detector按照“谁最先返回非空的探测结果,就以该结果为准”的原则.  
         * 3、cpDetector是基于统计学原理的,不保证完全正确. 
         * </pre> 
         */  
        CodepageDetectorProxy detector = CodepageDetectorProxy.getInstance();  
          
        detector.add(new ParsingDetector(true));  
        detector.add(UnicodeDetector.getInstance());  
        detector.add(JChardetFacade.getInstance());//内部引用了 chardet.jar的类  
        detector.add(ASCIIDetector.getInstance());  
          
        Charset charset = null;  
        try {  
            charset = detector.detectCodepage(file.toURI().toURL());  
        } catch (Exception e) {  
            e.printStackTrace();  
        }  
          
        //默认为GBK  
        String charsetName = "GBK";  
        if (charset != null) {  
            if (charset.name().equals("US-ASCII"))
                charsetName = "ISO_8859_1";  
            else if(charset.name().equals("UTF-8"))
            	charsetName = "UTF-8";
            else if(charset.name().equals("Unicode"))
            	charsetName = "Unicode";
            else
                charsetName = charset.name();  
        }  
        return charsetName;  
    }  
    /**
     * <div>
     * 利用第三方开源包cpdetector获取文件编码格式.<br/>
     * --1、cpDetector内置了一些常用的探测实现类,这些探测实现类的实例可以通过add方法加进来,
     *   如:ParsingDetector、 JChardetFacade、ASCIIDetector、UnicodeDetector. <br/>
     * --2、detector按照“谁最先返回非空的探测结果,就以该结果为准”的原则. <br/>
     * --3、cpDetector是基于统计学原理的,不保证完全正确.<br/>
     * </div>
     * @param filePath
     * @return 返回文件编码类型：GBK、UTF-8、UTF-16BE、ISO_8859_1
     * @throws Exception 
     */
    public static String getFileEncode(String filePath) throws Exception {
        CodepageDetectorProxy detector = CodepageDetectorProxy.getInstance();
        /*ParsingDetector可用于检查HTML、XML等文件或字符流的编码,
         * 构造方法中的参数用于指示是否显示探测过程的详细信息，为false不显示。
        */
        detector.add(new ParsingDetector(false));
        /*JChardetFacade封装了由Mozilla组织提供的JChardet，它可以完成大多数文件的编码测定。
         * 所以，一般有了这个探测器就可满足大多数项目的要求，如果你还不放心，可以再多加几个探测器，
         * 比如下面的ASCIIDetector、UnicodeDetector等。
        */
        detector.add(JChardetFacade.getInstance());
        detector.add(ASCIIDetector.getInstance());
        detector.add(UnicodeDetector.getInstance());
        Charset charset = null;
        File file = new File(filePath);
        try {
            //charset = detector.detectCodepage(file.toURI().toURL());
            InputStream is = new BufferedInputStream(new FileInputStream(filePath));
            charset = detector.detectCodepage(is, 8);
        } catch (Exception e) {
            e.printStackTrace();
            throw e;
        }
 
        
        //默认为GBK  
        String charsetName = "GBK";  
        if (charset != null) {  
            if (charset.name().equals("US-ASCII"))
                charsetName = "ISO_8859_1";  
            else if(charset.name().equals("UTF-8"))
            	charsetName = "UTF-8";
            else if(charset.name().equals("Unicode"))
            	charsetName = "Unicode";
            else
                charsetName = charset.name();  
        }  
        return charsetName;
    }
}
