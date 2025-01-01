/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-RC-IEs"
 * 	found in "e2sm_rc_v1_03_standard.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -pdu=auto -no-gen-example`
 */

#ifndef	_E2SM_RC_IndicationMessage_Format6_RANP_Item_H_
#define	_E2SM_RC_IndicationMessage_Format6_RANP_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RANParameter-ID.h"
#include "RANParameter-ValueType.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* E2SM-RC-IndicationMessage-Format6-RANP-Item */
typedef struct E2SM_RC_IndicationMessage_Format6_RANP_Item {
	RANParameter_ID_t	 ranParameter_ID;
	RANParameter_ValueType_t	 ranParameter_valueType;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2SM_RC_IndicationMessage_Format6_RANP_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E2SM_RC_IndicationMessage_Format6_RANP_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_E2SM_RC_IndicationMessage_Format6_RANP_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_E2SM_RC_IndicationMessage_Format6_RANP_Item_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _E2SM_RC_IndicationMessage_Format6_RANP_Item_H_ */
#include <asn_internal.h>
