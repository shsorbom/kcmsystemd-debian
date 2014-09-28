#
# Regular cron jobs for the kcmsystemd package
#
0 4	* * *	root	[ -x /usr/bin/kcmsystemd_maintenance ] && /usr/bin/kcmsystemd_maintenance
