# -*- coding: utf-8 -*-
# @Author: 100yang
# @Date:   2019-11-18
# @Last Modified by:   100yang
# @Last Modified time: 2019-12-19
import base64
bs = 'iVBORw0KGgoAAAANSUhEUg....'  # 太长了省略
imgdata = base64.b64decode(bs)
file = open('filename.jpg', 'wb')
file.write(imgdata)
file.close()
