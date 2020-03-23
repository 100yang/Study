# -*- coding: utf-8 -*-
# @Author: 100yang
# @Date:   2019-11-18
# @Last Modified by:   100yang
# @Last Modified time: 2020-03-21
# -*- coding: utf-8 -*
import base64
# import sys
f = open('/home/onezero/Documents/软件项目管理/Gantt chart.svg', 'rb')  # 二进制方式打开图文件
ls_f = base64.b64encode(f.read())  # 读取文件内容，转换为base64编码
f.close()
print(ls_f)
