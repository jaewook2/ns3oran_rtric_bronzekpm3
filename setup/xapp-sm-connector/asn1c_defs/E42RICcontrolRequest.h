/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-PDU-Contents"
 * 	found in "e2ap-v01.01.asn1"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -pdu=auto -no-gen-example`
 */

#ifndef	_E42RICcontrolRequest_H_
#define	_E42RICcontrolRequest_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ProtocolIE-Container.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* E42RICcontrolRequest */
typedef struct E42RICcontrolRequest {
	ProtocolIE_Container_1479P10_t	 protocolIEs;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E42RICcontrolRequest_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E42RICcontrolRequest;
extern asn_SEQUENCE_specifics_t asn_SPC_E42RICcontrolRequest_specs_1;
extern asn_TYPE_member_t asn_MBR_E42RICcontrolRequest_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _E42RICcontrolRequest_H_ */
#include <asn_internal.h>
