# @Author: 100yang
# @Date:   2019-12-30
# @Last Modified by:   100yang
# @Last Modified time: 2019-12-30
#!/bin/bash
clear
echo ". ./install.sh"
echo "请确认是否安装 (Y/N)"
read options	
if [[ options -eq 'Y' ]]; then
	if [[ -d ${HOME}/Files ]]; then
		echo "目录已存在"
	else
		echo "新建目录　${HOME}/Files"
		`mkdir ${HOME}/Files`
	fi
	echo "当前安装目录 ${HOME}/Files"
	cd ${HOME}/Files
	# 修改环境变量
	curl https://raw.githubusercontent.com/100yang/Study/master/Linux_Study/profile.txt >> ${HOME}/Public/profile.txt
	curl https://raw.githubusercontent.com/100yang/Study/master/Linux_Study/bashrc.txt >>  ${HOME}/Public/bashrc.txt
	if [[ -e ${HOME}/Public/profile.txt ]]; then
		echo "下载profile.txt　成功"
		cat ${HOME}/Public/profile.txt  >> /etc/profile
	else 
		echo "下载profile.txt　失败"
	fi
	if [[ -e ${HOME}/Public/bashrc.txt ]]; then
		echo "下载bashrc.txt　成功"
		cat ${HOME}/Public/bashrc.txt >> ${HOME}/.bashrc
	else 
		echo "下载bashrc.txt　失败"
	fi
	# 安装sublime
	wget -qO - https://download.sublimetext.com/sublimehq-pub.gpg | sudo apt-key add -
	apt-get install apt-transport-https
	echo "deb https://download.sublimetext.com/ apt/stable/" | sudo tee /etc/apt/sources.list.d/sublime-text.list
	apt-get update
	pt-get install sublime-text
	#
	git clone https://github.com/nodejs/node.git
	git clone https://github.com/wszqkzqk/deepin-wine-ubuntu.git
	# 安装TIM
	wget -P ${HOME}/Downloads https://mirrors.aliyun.com/deepin/pool/non-free/d/deepin.com.qq.office/deepin.com.qq.office_2.0.0deepin4_i386.deb
	if [[ -e  ${HOME}/Downloads/deepin.com.qq.office_2.0.0deepin4_i386.deb ]]; then
		echo "开始安装TIM"
		dpkg -i ${HOME}/Downloads/deepin.com.qq.office_2.0.0deepin4_i386.deb
	else 
		echo "下载失败"
	fi
	#　安装eclipse
	wget -P ${HOME}/Downloads https://www.eclipse.org/downloads/download.php?file=/technology/epp/downloads/release/2019-12/R/eclipse-java-2019-12-R-linux-gtk-x86_64.tar.gz&mirror_id=105
	if [[ -e  ${HOME}/Downloads/eclipse-java-2019-12-R-linux-gtk-x86_64.tar.gz ]]; then
		echo "开始解压EClipse 解压到 ${HOME}/Files下"
		tar -zxvf ${HOME}/Downloads/eclipse-java-2019-12-R-linux-gtk-x86_64.tar.gz -C ${HOME}/Files
		echo "[Desktop Entry]
Encoding=UTF-8
Name=Eclipse
Comment=Eclipse
Exec=${HOME}/Files/eclipse/eclipse
Icon=${HOME}/Files/eclipse/icon.xpm
Terminal=false
StartupNotify=true
Type=Application
Categories=Application;Development;
" >> /usr/share/applications/eclipse.desktop
	chmod u+x /usr/share/applications/eclipse.desktop
	else 
		echo "下载失败"
	fi
else
	echo "退出安装"
	exit
fi