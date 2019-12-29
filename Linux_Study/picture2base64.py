# -*- coding: utf-8 -*-
# @Author: 100yang
# @Date:   2019-11-18
# @Last Modified by:   100yang
# @Last Modified time: 2019-12-19
# -*- coding: utf-8 -*
import base64
# import sys
f = open('/home/onezero/Pictures/3.png', 'rb')  # 二进制方式打开图文件
ls_f = base64.b64encode(f.read())  # 读取文件内容，转换为base64编码
f.close()
print(ls_f)
