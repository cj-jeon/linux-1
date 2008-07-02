# if !defined(SYS_CRED_H)
# define SYS_CRED_H

typedef struct cred {
	int	cr_uid;
	int	cr_ruid;
	int	cr_suid;
	int	cr_gid;
	int	cr_rgid;
	int	cr_sgid;
	struct zone *cr_zone;
	} cred_t;

cred_t *CRED(void);
#define priv_policy_choice(a, b, c) 1
#define crgetzoneid(p) 0
#define crfree(cred)
#define crgetgid(cred)  ((cred)->cr_gid)
#define crgetuid(cred)  ((cred)->cr_uid)

//# define	curthread current_thread_info()->task

# endif