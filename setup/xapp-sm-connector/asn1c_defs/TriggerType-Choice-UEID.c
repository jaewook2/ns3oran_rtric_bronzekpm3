/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-RC-IEs"
 * 	found in "e2sm_rc_v1_03_standard.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -pdu=auto -no-gen-example`
 */

#include "TriggerType-Choice-UEID.h"

static int
memb_ueIDchange_ID_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1L && value <= 512L)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_memb_ueIDchange_ID_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_ueIDchange_ID_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  9,  9,  1,  512 }	/* (1..512,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_TriggerType_Choice_UEID_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct TriggerType_Choice_UEID, ueIDchange_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			&asn_OER_memb_ueIDchange_ID_constr_2,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_ueIDchange_ID_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			memb_ueIDchange_ID_constraint_1
		},
		0, 0, /* No default value */
		"ueIDchange-ID"
		},
};
static const ber_tlv_tag_t asn_DEF_TriggerType_Choice_UEID_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_TriggerType_Choice_UEID_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* ueIDchange-ID */
};
asn_SEQUENCE_specifics_t asn_SPC_TriggerType_Choice_UEID_specs_1 = {
	sizeof(struct TriggerType_Choice_UEID),
	offsetof(struct TriggerType_Choice_UEID, _asn_ctx),
	asn_MAP_TriggerType_Choice_UEID_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_TriggerType_Choice_UEID = {
	"TriggerType-Choice-UEID",
	"TriggerType-Choice-UEID",
	&asn_OP_SEQUENCE,
	asn_DEF_TriggerType_Choice_UEID_tags_1,
	sizeof(asn_DEF_TriggerType_Choice_UEID_tags_1)
		/sizeof(asn_DEF_TriggerType_Choice_UEID_tags_1[0]), /* 1 */
	asn_DEF_TriggerType_Choice_UEID_tags_1,	/* Same as above */
	sizeof(asn_DEF_TriggerType_Choice_UEID_tags_1)
		/sizeof(asn_DEF_TriggerType_Choice_UEID_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_TriggerType_Choice_UEID_1,
	1,	/* Elements count */
	&asn_SPC_TriggerType_Choice_UEID_specs_1	/* Additional specs */
};

