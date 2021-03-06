/* Copyright (c) 2011, The Linux Foundation. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above
 *       copyright notice, this list of conditions and the following
 *       disclaimer in the documentation and/or other materials provided
 *       with the distribution.
 *     * Neither the name of The Linux Foundation nor the names of its
 *       contributors may be used to endorse or promote products derived
 *       from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
 * BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
 * OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
 * IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */
/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "loc_api_rpcgen_cb_rpc.h"
#include <stdio.h>
#include <stdlib.h>
#include <rpc/pmap_clnt.h>
#include <string.h>
#include <memory.h>
#include <sys/socket.h>
#include <netinet/in.h>

#ifndef SIG_PF
#define SIG_PF void(*)(int)
#endif

void
loc_apicbprog_0x00050001(struct svc_req *rqstp, register SVCXPRT *transp)
{
    union {
        rpc_loc_event_cb_f_type_args rpc_loc_event_cb_f_type_0x00050001_arg;
    } argument;
    union {
        rpc_loc_event_cb_f_type_rets rpc_loc_event_cb_f_type_0x00050001_res;
    } result;
    bool_t retval;
    xdrproc_t _xdr_argument, _xdr_result;
    bool_t (*local)(char *, void *, struct svc_req *);

    switch (rqstp->rq_proc) {
    case NULLPROC:
        (void) svc_sendreply (transp, (xdrproc_t) xdr_void, (char *)NULL);
        return;

    case rpc_loc_event_cb_f_type:
        _xdr_argument = (xdrproc_t) xdr_rpc_loc_event_cb_f_type_args;
        _xdr_result = (xdrproc_t) xdr_rpc_loc_event_cb_f_type_rets;
        local = (bool_t (*) (char *, void *,  struct svc_req *))rpc_loc_event_cb_f_type_0x00050001_svc;
        break;

    default:
        svcerr_noproc (transp);
        return;
    }
    memset ((char *)&argument, 0, sizeof (argument));
    if (!svc_getargs (transp, (xdrproc_t) _xdr_argument, (caddr_t) &argument)) {
        svcerr_decode (transp);
        return;
    }
    retval = (bool_t) (*local)((char *)&argument, (void *)&result, rqstp);
    if (retval > 0 && !svc_sendreply(transp, (xdrproc_t) _xdr_result, (char *)&result)) {
        svcerr_systemerr (transp);
    }
    if (!svc_freeargs (transp, (xdrproc_t) _xdr_argument, (caddr_t) &argument)) {
        fprintf (stderr, "%s", "unable to free arguments");
        exit (1);
    }
    if (!loc_apicbprog_0x00050001_freeresult (transp, _xdr_result, (caddr_t) &result))
        fprintf (stderr, "%s", "unable to free results");

    return;
}

void
loc_apicbprog_0x00050002(struct svc_req *rqstp, register SVCXPRT *transp)
{
    union {
        int fill;
    } argument;
    union {
        int rpc_loc_api_cb_null_0x00050002_res;
    } result;
    bool_t retval;
    xdrproc_t _xdr_argument, _xdr_result;
    bool_t (*local)(char *, void *, struct svc_req *);

    switch (rqstp->rq_proc) {
    case NULLPROC:
        (void) svc_sendreply (transp, (xdrproc_t) xdr_void, (char *)NULL);
        return;

    case rpc_loc_api_cb_null:
        _xdr_argument = (xdrproc_t) xdr_void;
        _xdr_result = (xdrproc_t) xdr_int;
        local = (bool_t (*) (char *, void *,  struct svc_req *))rpc_loc_api_cb_null_0x00050002_svc;
        break;

    default:
        svcerr_noproc (transp);
        return;
    }
    memset ((char *)&argument, 0, sizeof (argument));
    if (!svc_getargs (transp, (xdrproc_t) _xdr_argument, (caddr_t) &argument)) {
        svcerr_decode (transp);
        return;
    }
    retval = (bool_t) (*local)((char *)&argument, (void *)&result, rqstp);
    if (retval > 0 && !svc_sendreply(transp, (xdrproc_t) _xdr_result, (char *)&result)) {
        svcerr_systemerr (transp);
    }
    if (!svc_freeargs (transp, (xdrproc_t) _xdr_argument, (caddr_t) &argument)) {
        fprintf (stderr, "%s", "unable to free arguments");
        exit (1);
    }
    if (!loc_apicbprog_0x00050002_freeresult (transp, _xdr_result, (caddr_t) &result))
        fprintf (stderr, "%s", "unable to free results");

    return;
}

void
loc_apicbprog_0x00050003(struct svc_req *rqstp, register SVCXPRT *transp)
{
    union {
        int fill;
    } argument;
    union {
        int rpc_loc_api_cb_null_0x00050003_res;
    } result;
    bool_t retval;
    xdrproc_t _xdr_argument, _xdr_result;
    bool_t (*local)(char *, void *, struct svc_req *);

    switch (rqstp->rq_proc) {
    case NULLPROC:
        (void) svc_sendreply (transp, (xdrproc_t) xdr_void, (char *)NULL);
        return;

    case rpc_loc_api_cb_null:
        _xdr_argument = (xdrproc_t) xdr_void;
        _xdr_result = (xdrproc_t) xdr_int;
        local = (bool_t (*) (char *, void *,  struct svc_req *))rpc_loc_api_cb_null_0x00050003_svc;
        break;

    default:
        svcerr_noproc (transp);
        return;
    }
    memset ((char *)&argument, 0, sizeof (argument));
    if (!svc_getargs (transp, (xdrproc_t) _xdr_argument, (caddr_t) &argument)) {
        svcerr_decode (transp);
        return;
    }
    retval = (bool_t) (*local)((char *)&argument, (void *)&result, rqstp);
    if (retval > 0 && !svc_sendreply(transp, (xdrproc_t) _xdr_result, (char *)&result)) {
        svcerr_systemerr (transp);
    }
    if (!svc_freeargs (transp, (xdrproc_t) _xdr_argument, (caddr_t) &argument)) {
        fprintf (stderr, "%s", "unable to free arguments");
        exit (1);
    }
    if (!loc_apicbprog_0x00050003_freeresult (transp, _xdr_result, (caddr_t) &result))
        fprintf (stderr, "%s", "unable to free results");

    return;
}

void
loc_apicbprog_0x00050004(struct svc_req *rqstp, register SVCXPRT *transp)
{
    union {
        int fill;
    } argument;
    union {
        int rpc_loc_api_cb_null_0x00050004_res;
    } result;
    bool_t retval;
    xdrproc_t _xdr_argument, _xdr_result;
    bool_t (*local)(char *, void *, struct svc_req *);

    switch (rqstp->rq_proc) {
    case NULLPROC:
        (void) svc_sendreply (transp, (xdrproc_t) xdr_void, (char *)NULL);
        return;

    case rpc_loc_api_cb_null:
        _xdr_argument = (xdrproc_t) xdr_void;
        _xdr_result = (xdrproc_t) xdr_int;
        local = (bool_t (*) (char *, void *,  struct svc_req *))rpc_loc_api_cb_null_0x00050004_svc;
        break;

    default:
        svcerr_noproc (transp);
        return;
    }
    memset ((char *)&argument, 0, sizeof (argument));
    if (!svc_getargs (transp, (xdrproc_t) _xdr_argument, (caddr_t) &argument)) {
        svcerr_decode (transp);
        return;
    }
    retval = (bool_t) (*local)((char *)&argument, (void *)&result, rqstp);
    if (retval > 0 && !svc_sendreply(transp, (xdrproc_t) _xdr_result, (char *)&result)) {
        svcerr_systemerr (transp);
    }
    if (!svc_freeargs (transp, (xdrproc_t) _xdr_argument, (caddr_t) &argument)) {
        fprintf (stderr, "%s", "unable to free arguments");
        exit (1);
    }
    if (!loc_apicbprog_0x00050004_freeresult (transp, _xdr_result, (caddr_t) &result))
        fprintf (stderr, "%s", "unable to free results");

    return;
}

void
loc_apicbprog_0x00050005(struct svc_req *rqstp, register SVCXPRT *transp)
{
    union {
        int fill;
    } argument;
    union {
        int rpc_loc_api_cb_null_0x00050005_res;
    } result;
    bool_t retval;
    xdrproc_t _xdr_argument, _xdr_result;
    bool_t (*local)(char *, void *, struct svc_req *);

    switch (rqstp->rq_proc) {
    case NULLPROC:
        (void) svc_sendreply (transp, (xdrproc_t) xdr_void, (char *)NULL);
        return;

    case rpc_loc_api_cb_null:
        _xdr_argument = (xdrproc_t) xdr_void;
        _xdr_result = (xdrproc_t) xdr_int;
        local = (bool_t (*) (char *, void *,  struct svc_req *))rpc_loc_api_cb_null_0x00050005_svc;
        break;

    default:
        svcerr_noproc (transp);
        return;
    }
    memset ((char *)&argument, 0, sizeof (argument));
    if (!svc_getargs (transp, (xdrproc_t) _xdr_argument, (caddr_t) &argument)) {
        svcerr_decode (transp);
        return;
    }
    retval = (bool_t) (*local)((char *)&argument, (void *)&result, rqstp);
    if (retval > 0 && !svc_sendreply(transp, (xdrproc_t) _xdr_result, (char *)&result)) {
        svcerr_systemerr (transp);
    }
    if (!svc_freeargs (transp, (xdrproc_t) _xdr_argument, (caddr_t) &argument)) {
        fprintf (stderr, "%s", "unable to free arguments");
        exit (1);
    }
    if (!loc_apicbprog_0x00050005_freeresult (transp, _xdr_result, (caddr_t) &result))
        fprintf (stderr, "%s", "unable to free results");

    return;
}

void
loc_apicbprog_0x00050006(struct svc_req *rqstp, register SVCXPRT *transp)
{
    union {
        int fill;
    } argument;
    union {
        int rpc_loc_api_cb_null_0x00050006_res;
    } result;
    bool_t retval;
    xdrproc_t _xdr_argument, _xdr_result;
    bool_t (*local)(char *, void *, struct svc_req *);

    switch (rqstp->rq_proc) {
    case NULLPROC:
        (void) svc_sendreply (transp, (xdrproc_t) xdr_void, (char *)NULL);
        return;

    case rpc_loc_api_cb_null:
        _xdr_argument = (xdrproc_t) xdr_void;
        _xdr_result = (xdrproc_t) xdr_int;
        local = (bool_t (*) (char *, void *,  struct svc_req *))rpc_loc_api_cb_null_0x00050006_svc;
        break;

    default:
        svcerr_noproc (transp);
        return;
    }
    memset ((char *)&argument, 0, sizeof (argument));
    if (!svc_getargs (transp, (xdrproc_t) _xdr_argument, (caddr_t) &argument)) {
        svcerr_decode (transp);
        return;
    }
    retval = (bool_t) (*local)((char *)&argument, (void *)&result, rqstp);
    if (retval > 0 && !svc_sendreply(transp, (xdrproc_t) _xdr_result, (char *)&result)) {
        svcerr_systemerr (transp);
    }
    if (!svc_freeargs (transp, (xdrproc_t) _xdr_argument, (caddr_t) &argument)) {
        fprintf (stderr, "%s", "unable to free arguments");
        exit (1);
    }
    if (!loc_apicbprog_0x00050006_freeresult (transp, _xdr_result, (caddr_t) &result))
        fprintf (stderr, "%s", "unable to free results");

    return;
}
