/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-PDU-Contents"
 * 	found in "e2ap-pdu-v03.01.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -no-gen-OER -D /tmp/workspace/oransim-gerrit/e2sim/asn1c/`
 */

#include "RICsubscriptionDetails.h"

asn_TYPE_member_t asn_MBR_RICsubscriptionDetails_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RICsubscriptionDetails, ricEventTriggerDefinition),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RICeventTriggerDefinition,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"ricEventTriggerDefinition"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RICsubscriptionDetails, ricAction_ToBeSetup_List),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RICactions_ToBeSetup_List,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"ricAction-ToBeSetup-List"
		},
};
static const ber_tlv_tag_t asn_DEF_RICsubscriptionDetails_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RICsubscriptionDetails_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ricEventTriggerDefinition */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ricAction-ToBeSetup-List */
};
asn_SEQUENCE_specifics_t asn_SPC_RICsubscriptionDetails_specs_1 = {
	sizeof(struct RICsubscriptionDetails),
	offsetof(struct RICsubscriptionDetails, _asn_ctx),
	asn_MAP_RICsubscriptionDetails_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RICsubscriptionDetails = {
	"RICsubscriptionDetails",
	"RICsubscriptionDetails",
	&asn_OP_SEQUENCE,
	asn_DEF_RICsubscriptionDetails_tags_1,
	sizeof(asn_DEF_RICsubscriptionDetails_tags_1)
		/sizeof(asn_DEF_RICsubscriptionDetails_tags_1[0]), /* 1 */
	asn_DEF_RICsubscriptionDetails_tags_1,	/* Same as above */
	sizeof(asn_DEF_RICsubscriptionDetails_tags_1)
		/sizeof(asn_DEF_RICsubscriptionDetails_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_RICsubscriptionDetails_1,
	2,	/* Elements count */
	&asn_SPC_RICsubscriptionDetails_specs_1	/* Additional specs */
};

