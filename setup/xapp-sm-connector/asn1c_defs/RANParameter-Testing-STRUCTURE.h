/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-RC-IEs"
 * 	found in "e2sm_rc_v1_03_standard.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -pdu=auto -no-gen-example`
 */

#ifndef	_RANParameter_Testing_STRUCTURE_H_
#define	_RANParameter_Testing_STRUCTURE_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RANParameter_Testing_Item;

/* RANParameter-Testing-STRUCTURE */
typedef struct RANParameter_Testing_STRUCTURE {
	A_SEQUENCE_OF(struct RANParameter_Testing_Item) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RANParameter_Testing_STRUCTURE_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RANParameter_Testing_STRUCTURE;
extern asn_SET_OF_specifics_t asn_SPC_RANParameter_Testing_STRUCTURE_specs_1;
extern asn_TYPE_member_t asn_MBR_RANParameter_Testing_STRUCTURE_1[1];
extern asn_per_constraints_t asn_PER_type_RANParameter_Testing_STRUCTURE_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _RANParameter_Testing_STRUCTURE_H_ */
#include <asn_internal.h>