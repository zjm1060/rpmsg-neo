

typedef int (*rpmsg_neo_remove_t)(void);
//
extern int rpmsg_neo_proxy(struct rpmsg_device *rpmsg_chnl,rpmsg_neo_remove_t *remove_func );
extern int rpmsg_neo_tty(struct rpmsg_device *rpmsg_chnl,rpmsg_neo_remove_t *remove_func );
extern int rpmsg_neo_ethernet(struct rpmsg_device *rpmsg_chnl,rpmsg_neo_remove_t *remove_func );

