/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-RC-IEs"
 * 	found in "e2sm_rc_v1_03_standard.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -pdu=auto -no-gen-example`
 */

#ifndef	_TriggerType_Choice_UEID_H_
#define	_TriggerType_Choice_UEID_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* TriggerType-Choice-UEID */
typedef struct TriggerType_Choice_UEID {
	long	 ueIDchange_ID;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TriggerType_Choice_UEID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TriggerType_Choice_UEID;
extern asn_SEQUENCE_specifics_t asn_SPC_TriggerType_Choice_UEID_specs_1;
extern asn_TYPE_member_t asn_MBR_TriggerType_Choice_UEID_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _TriggerType_Choice_UEID_H_ */
#include <asn_internal.h>
