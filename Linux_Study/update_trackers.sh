# @Author: 100yang
# @Date:   2020-02-17
# @Last Modified by:   100yang
# @Last Modified time: 2020-02-17
#!/bin/bash
# 更新trackers
curl https://ngosang.github.io/trackerslist/trackers_best.txt >> ${HOME}/Public/trackerslist.txt
curl https://ngosang.github.io/trackerslist/trackers_all.txt >> ${HOME}/Public/trackerslist.txt
curl https://ngosang.github.io/trackerslist/trackers_all_udp.txt >> ${HOME}/Public/trackerslist.txt
curl https://ngosang.github.io/trackerslist/trackers_all_http.txt >> ${HOME}/Public/trackerslist.txt
curl https://ngosang.github.io/trackerslist/trackers_all_https.txt >> ${HOME}/Public/trackerslist.txt
curl https://ngosang.github.io/trackerslist/trackers_all_ws.txt >> ${HOME}/Public/trackerslist.txt
curl https://ngosang.github.io/trackerslist/trackers_best_ip.txt >> ${HOME}/Public/trackerslist.txt
curl https://ngosang.github.io/trackerslist/trackers_all_ip.txt >> ${HOME}/Public/trackerslist.txt