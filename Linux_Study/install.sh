#!/bin/bash
# @Author: onezero
# @Date:   2019-10-26
# @Last Modified by:   100yang
# @Last Modified time: 2019-12-31
clear
echo "请用管理员权限执行本脚本 sudo bash install.sh"
echo "请确认是否安装 (Y/N)"
read options	
if [[ options -eq 'Y' ]]; then
	if [[ -d ${HOME}/Files ]]; then
		echo "目录已存在"
	else
		echo "新建目录　${HOME}/Files"
		`mkdir ${HOME}/Files`
	fi
	echo "开始安装 build-essential gcc g++ vim zip  unzip  shutter"
	apt-get install build-essential gcc g++ vim zip  unzip  shutter
	echo "开始安装 gnome-tweak-tool chrome-gnome-shell git"
	apt-get install gnome-tweak-tool chrome-gnome-shell git
	git config --global user.name "100yang"
	git config --global user.email 1989152546@qq.com

	echo "当前安装目录 ${HOME}/Files"
	echo "文件下载目录均为 ${HOME}/Downloads"
	cd ${HOME}/Files
	git clone https://github.com/100yang/leetcode-codeforces-acm-.git
	git clone https://github.com/100yang/Study.git
	echo "修改环境变量"
	# 修改环境变量
	curl https://raw.githubusercontent.com/100yang/Study/master/Linux_Study/profile.txt >> ${HOME}/Downloads/profile.txt
	curl https://raw.githubusercontent.com/100yang/Study/master/Linux_Study/bashrc.txt >>  ${HOME}/Downloads/bashrc.txt
	if [[ -e ${HOME}/Downloads/profile.txt ]]; then
		echo "下载${HOME}/Downloads/profile.txt 　成功"
		cat ${HOME}/Downloads/profile.txt  >> /etc/profile
	else 
		echo "下载${HOME}/Downloads/profile.txt 　失败"
	fi
	if [[ -e ${HOME}/Downloads/bashrc.txt ]]; then
		echo "下载${HOME}/Public/bashrc.txt　成功"
		cat ${HOME}/Downloads/bashrc.txt >> ${HOME}/.bashrc
	else 
		echo "下载${HOME}/Downloads/bashrc.txt　失败"
	fi
	echo "下载安装eclipse "
	#　安装eclipse
	wget -P ${HOME}/Downloads https://www.eclipse.org/downloads/download.php?file=/technology/epp/downloads/release/2019-12/R/eclipse-java-2019-12-R-linux-gtk-x86_64.tar.gz&mirror_id=105
	if [[ -e  ${HOME}/Downloads/eclipse-java-2019-12-R-linux-gtk-x86_64.tar.gz ]]; then
		echo "开始解压EClipse 解压到 ${HOME}/Files下"
		tar -zxvf ${HOME}/Downloads/eclipse-java-2019-12-R-linux-gtk-x86_64.tar.gz -C ${HOME}/Files
		mv ${HOME}/Files/eclipse-java-2019-12-R-linux-gtk-x86_64/eclipse ${HOME}/Files
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
	# 安装wps
	wget -P ${HOME}/Downloads https://wdl1.cache.wps.cn/wps/download/ep/Linux2019/8865/wps-office_11.1.0.8865_amd64.deb
	if [[ -e  ${HOME}/Downloads/wps-office_11.1.0.8865_amd64.deb ]]; then
		echo "开始安装wps "
		dpkg -i ${HOME}/Downloads/wps-office_11.1.0.8865_amd64.deb
		apt-get install -f
		dpkg -i ${HOME}/Downloads/wps-office_11.1.0.8865_amd64.deb
	else 
		echo "下载wps 失败"
	fi
	# 安装坚果云
	wget -P ${HOME}/Downloads https://www.jianguoyun.com/static/exe/installer/ubuntu/nautilus_nutstore_amd64.deb
	if [[ -e  ${HOME}/Downloads/nautilus_nutstore_amd64.deb ]]; then
		echo "开始安装坚果云"
		dpkg -i ${HOME}/Downloads/nautilus_nutstore_amd64.deb
		apt-get install -f
		dpkg -i ${HOME}/Downloads/nautilus_nutstore_amd64.deb
	else 
		echo "下载坚果云 失败"
	fi

	# 安装搜狗输入法
	apt-get install fcitx-bin      #安装fcitx-bin
 	apt-get update --fix-missing   #修复fcitx-bin安装失败的情况
 	apt-get install fcitx-bin      #重新安装fcitx-bin
	apt-get install fcitx-table    #安装fcitx-table
	wget -P ${HOME}/Downloads http://cdn2.ime.sogou.com/dl/index/1571302197/sogoupinyin_2.3.1.0112_amd64.deb?st=T1j5NkfyCr2xTQBwVFS6-A&e=1577772006&fn=sogoupinyin_2.3.1.0112_amd64.deb
	if [[ -e  ${HOME}/Downloads/sogoupinyin_2.3.1.0112_amd64.deb ]]; then
		echo "开始安装搜狗输入法"
		dpkg -i ${HOME}/Downloads/sogoupinyin_2.3.1.0112_amd64.deb
		apt-get install -f
		dpkg -i ${HOME}/Downloads/sogoupinyin_2.3.1.0112_amd64.deb
	else 
		echo "下载搜狗输入法失败"
	fi
	# 安装网易云
	wget -P ${HOME}/Downloads http://d1.music.126.net/dmusic/netease-cloud-music_1.2.1_amd64_ubuntu_20190428.deb
	if [[ -e  ${HOME}/Downloads/netease-cloud-music_1.2.1_amd64_ubuntu_20190428.deb ]]; then
		echo "开始安装网易云"
		dpkg -i ${HOME}/Downloads/netease-cloud-music_1.2.1_amd64_ubuntu_20190428.deb
		apt-get install -f
		dpkg -i ${HOME}/Downloads/netease-cloud-music_1.2.1_amd64_ubuntu_20190428.deb
	else 
		echo "下载失败"
	fi
	#
	git clone https://github.com/wszqkzqk/deepin-wine-ubuntu.git
	# 安装TIM
	wget -P ${HOME}/Downloads https://mirrors.aliyun.com/deepin/pool/non-free/d/deepin.com.qq.office/deepin.com.qq.office_2.0.0deepin4_i386.deb
	if [[ -e  ${HOME}/Downloads/deepin.com.qq.office_2.0.0deepin4_i386.deb ]]; then
		echo "开始安装TIM"
		dpkg -i ${HOME}/Downloads/deepin.com.qq.office_2.0.0deepin4_i386.deb
		apt-get install -f
		dpkg -i ${HOME}/Downloads/deepin.com.qq.office_2.0.0deepin4_i386.deb
	else 
		echo "下载失败"
	fi
	# 修改字体变成方框
	echo " WINE_CMD="LC_ALL=zh_CN.UTF-8 deepin-wine" " >> /opt/deepinwine/tools/run.sh
	

	git clone https://github.com/nodejs/node.git
	git clone https://github.com/haotian-wang/google-access-helper.git
	# 安装sublime
	wget -qO - https://download.sublimetext.com/sublimehq-pub.gpg | sudo apt-key add -
	apt-get install apt-transport-https
	echo "deb https://download.sublimetext.com/ apt/stable/" | sudo tee /etc/apt/sources.list.d/sublime-text.list
	apt-get update
	apt-get install sublime-text
else
	echo "退出安装"
	exit
fi