/*
 * System call prototypes.
 *
 * DO NOT EDIT-- this file is automatically generated.
 * $DragonFly: src/sys/emulation/ibcs2/i386/Attic/ibcs2_proto.h,v 1.9 2003/08/27 06:30:03 rob Exp $
 * created from DragonFly: src/sys/emulation/ibcs2/i386/syscalls.master,v 1.3 2003/08/07 21:17:17 dillon Exp 
 */

#ifndef _IBCS2_SYSPROTO_H_
#define	_IBCS2_SYSPROTO_H_

#include <sys/signal.h>

#include <sys/acl.h>

#include <sys/msgport.h>

#include <sys/sysmsg.h>

#define	PAD_(t)	(sizeof(register_t) <= sizeof(t) ? \
		0 : sizeof(register_t) - sizeof(t))

struct	ibcs2_read_args {
#ifdef _KERNEL
	union sysmsg sysmsg;
#endif
	union usrmsg usrmsg;
	int	fd;	char fd_[PAD_(int)];
	char *	buf;	char buf_[PAD_(char *)];
	u_int	nbytes;	char nbytes_[PAD_(u_int)];
};
struct	ibcs2_open_args {
#ifdef _KERNEL
	union sysmsg sysmsg;
#endif
	union usrmsg usrmsg;
	char *	path;	char path_[PAD_(char *)];
	int	flags;	char flags_[PAD_(int)];
	int	mode;	char mode_[PAD_(int)];
};
struct	ibcs2_wait_args {
#ifdef _KERNEL
	union sysmsg sysmsg;
#endif
	union usrmsg usrmsg;
	int	a1;	char a1_[PAD_(int)];
	int	a2;	char a2_[PAD_(int)];
	int	a3;	char a3_[PAD_(int)];
};
struct	ibcs2_creat_args {
#ifdef _KERNEL
	union sysmsg sysmsg;
#endif
	union usrmsg usrmsg;
	char *	path;	char path_[PAD_(char *)];
	int	mode;	char mode_[PAD_(int)];
};
struct	ibcs2_unlink_args {
#ifdef _KERNEL
	union sysmsg sysmsg;
#endif
	union usrmsg usrmsg;
	char *	path;	char path_[PAD_(char *)];
};
struct	ibcs2_execv_args {
#ifdef _KERNEL
	union sysmsg sysmsg;
#endif
	union usrmsg usrmsg;
	char *	path;	char path_[PAD_(char *)];
	char **	argp;	char argp_[PAD_(char **)];
};
struct	ibcs2_chdir_args {
#ifdef _KERNEL
	union sysmsg sysmsg;
#endif
	union usrmsg usrmsg;
	char *	path;	char path_[PAD_(char *)];
};
struct	ibcs2_time_args {
#ifdef _KERNEL
	union sysmsg sysmsg;
#endif
	union usrmsg usrmsg;
	ibcs2_time_t *	tp;	char tp_[PAD_(ibcs2_time_t *)];
};
struct	ibcs2_mknod_args {
#ifdef _KERNEL
	union sysmsg sysmsg;
#endif
	union usrmsg usrmsg;
	char *	path;	char path_[PAD_(char *)];
	int	mode;	char mode_[PAD_(int)];
	int	dev;	char dev_[PAD_(int)];
};
struct	ibcs2_chmod_args {
#ifdef _KERNEL
	union sysmsg sysmsg;
#endif
	union usrmsg usrmsg;
	char *	path;	char path_[PAD_(char *)];
	int	mode;	char mode_[PAD_(int)];
};
struct	ibcs2_chown_args {
#ifdef _KERNEL
	union sysmsg sysmsg;
#endif
	union usrmsg usrmsg;
	char *	path;	char path_[PAD_(char *)];
	int	uid;	char uid_[PAD_(int)];
	int	gid;	char gid_[PAD_(int)];
};
struct	ibcs2_stat_args {
#ifdef _KERNEL
	union sysmsg sysmsg;
#endif
	union usrmsg usrmsg;
	char *	path;	char path_[PAD_(char *)];
	struct ibcs2_stat *	st;	char st_[PAD_(struct ibcs2_stat *)];
};
struct	ibcs2_lseek_args {
#ifdef _KERNEL
	union sysmsg sysmsg;
#endif
	union usrmsg usrmsg;
	int	fd;	char fd_[PAD_(int)];
	long	offset;	char offset_[PAD_(long)];
	int	whence;	char whence_[PAD_(int)];
};
struct	ibcs2_mount_args {
#ifdef _KERNEL
	union sysmsg sysmsg;
#endif
	union usrmsg usrmsg;
	char *	special;	char special_[PAD_(char *)];
	char *	dir;	char dir_[PAD_(char *)];
	int	flags;	char flags_[PAD_(int)];
	int	fstype;	char fstype_[PAD_(int)];
	char *	data;	char data_[PAD_(char *)];
	int	len;	char len_[PAD_(int)];
};
struct	ibcs2_umount_args {
#ifdef _KERNEL
	union sysmsg sysmsg;
#endif
	union usrmsg usrmsg;
	char *	name;	char name_[PAD_(char *)];
};
struct	ibcs2_setuid_args {
#ifdef _KERNEL
	union sysmsg sysmsg;
#endif
	union usrmsg usrmsg;
	int	uid;	char uid_[PAD_(int)];
};
struct	ibcs2_stime_args {
#ifdef _KERNEL
	union sysmsg sysmsg;
#endif
	union usrmsg usrmsg;
	long *	timep;	char timep_[PAD_(long *)];
};
struct	ibcs2_alarm_args {
#ifdef _KERNEL
	union sysmsg sysmsg;
#endif
	union usrmsg usrmsg;
	unsigned	sec;	char sec_[PAD_(unsigned)];
};
struct	ibcs2_fstat_args {
#ifdef _KERNEL
	union sysmsg sysmsg;
#endif
	union usrmsg usrmsg;
	int	fd;	char fd_[PAD_(int)];
	struct ibcs2_stat *	st;	char st_[PAD_(struct ibcs2_stat *)];
};
struct	ibcs2_pause_args {
#ifdef _KERNEL
	union sysmsg sysmsg;
#endif
	union usrmsg usrmsg;
	register_t dummy;
};
struct	ibcs2_utime_args {
#ifdef _KERNEL
	union sysmsg sysmsg;
#endif
	union usrmsg usrmsg;
	char *	path;	char path_[PAD_(char *)];
	struct ibcs2_utimbuf *	buf;	char buf_[PAD_(struct ibcs2_utimbuf *)];
};
struct	ibcs2_stty_args {
#ifdef _KERNEL
	union sysmsg sysmsg;
#endif
	union usrmsg usrmsg;
	int	fd;	char fd_[PAD_(int)];
	struct sgttyb *	buf;	char buf_[PAD_(struct sgttyb *)];
};
struct	ibcs2_gtty_args {
#ifdef _KERNEL
	union sysmsg sysmsg;
#endif
	union usrmsg usrmsg;
	int	fd;	char fd_[PAD_(int)];
	struct sgttyb *	buf;	char buf_[PAD_(struct sgttyb *)];
};
struct	ibcs2_access_args {
#ifdef _KERNEL
	union sysmsg sysmsg;
#endif
	union usrmsg usrmsg;
	char *	path;	char path_[PAD_(char *)];
	int	flags;	char flags_[PAD_(int)];
};
struct	ibcs2_nice_args {
#ifdef _KERNEL
	union sysmsg sysmsg;
#endif
	union usrmsg usrmsg;
	int	incr;	char incr_[PAD_(int)];
};
struct	ibcs2_statfs_args {
#ifdef _KERNEL
	union sysmsg sysmsg;
#endif
	union usrmsg usrmsg;
	char *	path;	char path_[PAD_(char *)];
	struct ibcs2_statfs *	buf;	char buf_[PAD_(struct ibcs2_statfs *)];
	int	len;	char len_[PAD_(int)];
	int	fstype;	char fstype_[PAD_(int)];
};
struct	ibcs2_kill_args {
#ifdef _KERNEL
	union sysmsg sysmsg;
#endif
	union usrmsg usrmsg;
	int	pid;	char pid_[PAD_(int)];
	int	signo;	char signo_[PAD_(int)];
};
struct	ibcs2_fstatfs_args {
#ifdef _KERNEL
	union sysmsg sysmsg;
#endif
	union usrmsg usrmsg;
	int	fd;	char fd_[PAD_(int)];
	struct ibcs2_statfs *	buf;	char buf_[PAD_(struct ibcs2_statfs *)];
	int	len;	char len_[PAD_(int)];
	int	fstype;	char fstype_[PAD_(int)];
};
struct	ibcs2_pgrpsys_args {
#ifdef _KERNEL
	union sysmsg sysmsg;
#endif
	union usrmsg usrmsg;
	int	type;	char type_[PAD_(int)];
	caddr_t	dummy;	char dummy_[PAD_(caddr_t)];
	int	pid;	char pid_[PAD_(int)];
	int	pgid;	char pgid_[PAD_(int)];
};
struct	ibcs2_xenix_args {
#ifdef _KERNEL
	union sysmsg sysmsg;
#endif
	union usrmsg usrmsg;
	int	a1;	char a1_[PAD_(int)];
	int	a2;	char a2_[PAD_(int)];
	int	a3;	char a3_[PAD_(int)];
	int	a4;	char a4_[PAD_(int)];
	int	a5;	char a5_[PAD_(int)];
};
struct	ibcs2_times_args {
#ifdef _KERNEL
	union sysmsg sysmsg;
#endif
	union usrmsg usrmsg;
	struct tms *	tp;	char tp_[PAD_(struct tms *)];
};
struct	ibcs2_plock_args {
#ifdef _KERNEL
	union sysmsg sysmsg;
#endif
	union usrmsg usrmsg;
	int	cmd;	char cmd_[PAD_(int)];
};
struct	ibcs2_setgid_args {
#ifdef _KERNEL
	union sysmsg sysmsg;
#endif
	union usrmsg usrmsg;
	int	gid;	char gid_[PAD_(int)];
};
struct	ibcs2_sigsys_args {
#ifdef _KERNEL
	union sysmsg sysmsg;
#endif
	union usrmsg usrmsg;
	int	sig;	char sig_[PAD_(int)];
	ibcs2_sig_t	fp;	char fp_[PAD_(ibcs2_sig_t)];
};
struct	ibcs2_msgsys_args {
#ifdef _KERNEL
	union sysmsg sysmsg;
#endif
	union usrmsg usrmsg;
	int	which;	char which_[PAD_(int)];
	int	a2;	char a2_[PAD_(int)];
	int	a3;	char a3_[PAD_(int)];
	int	a4;	char a4_[PAD_(int)];
	int	a5;	char a5_[PAD_(int)];
	int	a6;	char a6_[PAD_(int)];
};
struct	ibcs2_sysi86_args {
#ifdef _KERNEL
	union sysmsg sysmsg;
#endif
	union usrmsg usrmsg;
	int	cmd;	char cmd_[PAD_(int)];
	int *	arg;	char arg_[PAD_(int *)];
};
struct	ibcs2_shmsys_args {
#ifdef _KERNEL
	union sysmsg sysmsg;
#endif
	union usrmsg usrmsg;
	int	which;	char which_[PAD_(int)];
	int	a2;	char a2_[PAD_(int)];
	int	a3;	char a3_[PAD_(int)];
	int	a4;	char a4_[PAD_(int)];
};
struct	ibcs2_semsys_args {
#ifdef _KERNEL
	union sysmsg sysmsg;
#endif
	union usrmsg usrmsg;
	int	which;	char which_[PAD_(int)];
	int	a2;	char a2_[PAD_(int)];
	int	a3;	char a3_[PAD_(int)];
	int	a4;	char a4_[PAD_(int)];
	int	a5;	char a5_[PAD_(int)];
};
struct	ibcs2_ioctl_args {
#ifdef _KERNEL
	union sysmsg sysmsg;
#endif
	union usrmsg usrmsg;
	int	fd;	char fd_[PAD_(int)];
	int	cmd;	char cmd_[PAD_(int)];
	caddr_t	data;	char data_[PAD_(caddr_t)];
};
struct	ibcs2_uadmin_args {
#ifdef _KERNEL
	union sysmsg sysmsg;
#endif
	union usrmsg usrmsg;
	int	cmd;	char cmd_[PAD_(int)];
	int	func;	char func_[PAD_(int)];
	caddr_t	data;	char data_[PAD_(caddr_t)];
};
struct	ibcs2_utssys_args {
#ifdef _KERNEL
	union sysmsg sysmsg;
#endif
	union usrmsg usrmsg;
	int	a1;	char a1_[PAD_(int)];
	int	a2;	char a2_[PAD_(int)];
	int	flag;	char flag_[PAD_(int)];
};
struct	ibcs2_execve_args {
#ifdef _KERNEL
	union sysmsg sysmsg;
#endif
	union usrmsg usrmsg;
	char *	path;	char path_[PAD_(char *)];
	char **	argp;	char argp_[PAD_(char **)];
	char **	envp;	char envp_[PAD_(char **)];
};
struct	ibcs2_fcntl_args {
#ifdef _KERNEL
	union sysmsg sysmsg;
#endif
	union usrmsg usrmsg;
	int	fd;	char fd_[PAD_(int)];
	int	cmd;	char cmd_[PAD_(int)];
	char *	arg;	char arg_[PAD_(char *)];
};
struct	ibcs2_ulimit_args {
#ifdef _KERNEL
	union sysmsg sysmsg;
#endif
	union usrmsg usrmsg;
	int	cmd;	char cmd_[PAD_(int)];
	int	newlimit;	char newlimit_[PAD_(int)];
};
struct	ibcs2_rmdir_args {
#ifdef _KERNEL
	union sysmsg sysmsg;
#endif
	union usrmsg usrmsg;
	char *	path;	char path_[PAD_(char *)];
};
struct	ibcs2_mkdir_args {
#ifdef _KERNEL
	union sysmsg sysmsg;
#endif
	union usrmsg usrmsg;
	char *	path;	char path_[PAD_(char *)];
	int	mode;	char mode_[PAD_(int)];
};
struct	ibcs2_getdents_args {
#ifdef _KERNEL
	union sysmsg sysmsg;
#endif
	union usrmsg usrmsg;
	int	fd;	char fd_[PAD_(int)];
	char *	buf;	char buf_[PAD_(char *)];
	int	nbytes;	char nbytes_[PAD_(int)];
};
struct	ibcs2_sysfs_args {
#ifdef _KERNEL
	union sysmsg sysmsg;
#endif
	union usrmsg usrmsg;
	int	cmd;	char cmd_[PAD_(int)];
	caddr_t	d1;	char d1_[PAD_(caddr_t)];
	char *	buf;	char buf_[PAD_(char *)];
};
struct	ibcs2_getmsg_args {
#ifdef _KERNEL
	union sysmsg sysmsg;
#endif
	union usrmsg usrmsg;
	int	fd;	char fd_[PAD_(int)];
	struct ibcs2_stropts *	ctl;	char ctl_[PAD_(struct ibcs2_stropts *)];
	struct ibcs2_stropts *	dat;	char dat_[PAD_(struct ibcs2_stropts *)];
	int *	flags;	char flags_[PAD_(int *)];
};
struct	ibcs2_putmsg_args {
#ifdef _KERNEL
	union sysmsg sysmsg;
#endif
	union usrmsg usrmsg;
	int	fd;	char fd_[PAD_(int)];
	struct ibcs2_stropts *	ctl;	char ctl_[PAD_(struct ibcs2_stropts *)];
	struct ibcs2_stropts *	dat;	char dat_[PAD_(struct ibcs2_stropts *)];
	int	flags;	char flags_[PAD_(int)];
};
struct	ibcs2_poll_args {
#ifdef _KERNEL
	union sysmsg sysmsg;
#endif
	union usrmsg usrmsg;
	struct ibcs2_poll *	fds;	char fds_[PAD_(struct ibcs2_poll *)];
	long	nfds;	char nfds_[PAD_(long)];
	int	timeout;	char timeout_[PAD_(int)];
};
struct	ibcs2_secure_args {
#ifdef _KERNEL
	union sysmsg sysmsg;
#endif
	union usrmsg usrmsg;
	int	cmd;	char cmd_[PAD_(int)];
	int	a1;	char a1_[PAD_(int)];
	int	a2;	char a2_[PAD_(int)];
	int	a3;	char a3_[PAD_(int)];
	int	a4;	char a4_[PAD_(int)];
	int	a5;	char a5_[PAD_(int)];
};
struct	ibcs2_symlink_args {
#ifdef _KERNEL
	union sysmsg sysmsg;
#endif
	union usrmsg usrmsg;
	char *	path;	char path_[PAD_(char *)];
	char *	link;	char link_[PAD_(char *)];
};
struct	ibcs2_lstat_args {
#ifdef _KERNEL
	union sysmsg sysmsg;
#endif
	union usrmsg usrmsg;
	char *	path;	char path_[PAD_(char *)];
	struct ibcs2_stat *	st;	char st_[PAD_(struct ibcs2_stat *)];
};
struct	ibcs2_readlink_args {
#ifdef _KERNEL
	union sysmsg sysmsg;
#endif
	union usrmsg usrmsg;
	char *	path;	char path_[PAD_(char *)];
	char *	buf;	char buf_[PAD_(char *)];
	int	count;	char count_[PAD_(int)];
};
struct	ibcs2_isc_args {
#ifdef _KERNEL
	union sysmsg sysmsg;
#endif
	union usrmsg usrmsg;
	register_t dummy;
};

#ifdef _KERNEL

int	ibcs2_read (struct ibcs2_read_args *);
int	ibcs2_open (struct ibcs2_open_args *);
int	ibcs2_wait (struct ibcs2_wait_args *);
int	ibcs2_creat (struct ibcs2_creat_args *);
int	ibcs2_unlink (struct ibcs2_unlink_args *);
int	ibcs2_execv (struct ibcs2_execv_args *);
int	ibcs2_chdir (struct ibcs2_chdir_args *);
int	ibcs2_time (struct ibcs2_time_args *);
int	ibcs2_mknod (struct ibcs2_mknod_args *);
int	ibcs2_chmod (struct ibcs2_chmod_args *);
int	ibcs2_chown (struct ibcs2_chown_args *);
int	ibcs2_stat (struct ibcs2_stat_args *);
int	ibcs2_lseek (struct ibcs2_lseek_args *);
int	ibcs2_mount (struct ibcs2_mount_args *);
int	ibcs2_umount (struct ibcs2_umount_args *);
int	ibcs2_setuid (struct ibcs2_setuid_args *);
int	ibcs2_stime (struct ibcs2_stime_args *);
int	ibcs2_alarm (struct ibcs2_alarm_args *);
int	ibcs2_fstat (struct ibcs2_fstat_args *);
int	ibcs2_pause (struct ibcs2_pause_args *);
int	ibcs2_utime (struct ibcs2_utime_args *);
int	ibcs2_stty (struct ibcs2_stty_args *);
int	ibcs2_gtty (struct ibcs2_gtty_args *);
int	ibcs2_access (struct ibcs2_access_args *);
int	ibcs2_nice (struct ibcs2_nice_args *);
int	ibcs2_statfs (struct ibcs2_statfs_args *);
int	ibcs2_kill (struct ibcs2_kill_args *);
int	ibcs2_fstatfs (struct ibcs2_fstatfs_args *);
int	ibcs2_pgrpsys (struct ibcs2_pgrpsys_args *);
int	ibcs2_xenix (struct ibcs2_xenix_args *);
int	ibcs2_times (struct ibcs2_times_args *);
int	ibcs2_plock (struct ibcs2_plock_args *);
int	ibcs2_setgid (struct ibcs2_setgid_args *);
int	ibcs2_sigsys (struct ibcs2_sigsys_args *);
int	ibcs2_msgsys (struct ibcs2_msgsys_args *);
int	ibcs2_sysi86 (struct ibcs2_sysi86_args *);
int	ibcs2_shmsys (struct ibcs2_shmsys_args *);
int	ibcs2_semsys (struct ibcs2_semsys_args *);
int	ibcs2_ioctl (struct ibcs2_ioctl_args *);
int	ibcs2_uadmin (struct ibcs2_uadmin_args *);
int	ibcs2_utssys (struct ibcs2_utssys_args *);
int	ibcs2_execve (struct ibcs2_execve_args *);
int	ibcs2_fcntl (struct ibcs2_fcntl_args *);
int	ibcs2_ulimit (struct ibcs2_ulimit_args *);
int	ibcs2_rmdir (struct ibcs2_rmdir_args *);
int	ibcs2_mkdir (struct ibcs2_mkdir_args *);
int	ibcs2_getdents (struct ibcs2_getdents_args *);
int	ibcs2_sysfs (struct ibcs2_sysfs_args *);
int	ibcs2_getmsg (struct ibcs2_getmsg_args *);
int	ibcs2_putmsg (struct ibcs2_putmsg_args *);
int	ibcs2_poll (struct ibcs2_poll_args *);
int	ibcs2_secure (struct ibcs2_secure_args *);
int	ibcs2_symlink (struct ibcs2_symlink_args *);
int	ibcs2_lstat (struct ibcs2_lstat_args *);
int	ibcs2_readlink (struct ibcs2_readlink_args *);
int	ibcs2_isc (struct ibcs2_isc_args *);

#endif /* _KERNEL */

#ifdef COMPAT_43


#ifdef _KERNEL


#endif /* _KERNEL */

#endif /* COMPAT_43 */

#undef PAD_

#endif /* !_IBCS2_SYSPROTO_H_ */
