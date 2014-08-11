/////////////////////////////////////////////////////////////////////////////
// Name:        attdef
// Author:      Laurent Pugin
// Created:     2014
// Copyright (c) Authors and others. All rights reserved.
/////////////////////////////////////////////////////////////////////////////


#ifndef __ATT_DEF_H__
#define __ATT_DEF_H__

namespace vrv {
    
//----------------------------------------------------------------------------
// MEI data defines
//----------------------------------------------------------------------------
    
/**
 * MEI data.ACCIDENTAL.IMPLICIT
 */
enum data_ACCIDENTAL_IMPLICIT  {
    ACCIDENTAL_IMPLICIT_NONE = 0,
    ACCIDENTAL_IMPLICIT_s,
    ACCIDENTAL_IMPLICIT_f,
    ACCIDENTAL_IMPLICIT_ss,
    ACCIDENTAL_IMPLICIT_ff,
    ACCIDENTAL_IMPLICIT_n,
    ACCIDENTAL_IMPLICIT_su,
    ACCIDENTAL_IMPLICIT_sd,
    ACCIDENTAL_IMPLICIT_fu,
    ACCIDENTAL_IMPLICIT_fd
};

/**
 * MEI data_BARRENDITION
 */
enum data_BARRENDITION {
    BARRENDITION_NONE = 0,
    BARRENDITION_dashed,
    BARRENDITION_dotted,
    BARRENDITION_dbl,
    BARRENDITION_dbldashed,
    BARRENDITION_dbldotted,
    BARRENDITION_end,
    BARRENDITION_invis,
    BARRENDITION_rptstart,
    BARRENDITION_rptboth,
    BARRENDITION_rptend,
    BARRENDITION_single
};
    
/**
 * MEI data.BOOEAN
 */
enum data_BOOLEAN {
    BOOLEAN_NONE = 0,
    BOOLEAN_true,
    BOOLEAN_false
};
    
/**
 * MEI data.CLEFSHAPE
 */
enum data_CLEFSHAPE {
    CLEFSHAPE_NONE = 0,
    CLEFSHAPE_G,
    CLEFSHAPE_GG,
    CLEFSHAPE_F,
    CLEFSHAPE_C,
    CLEFSHAPE_perc,
    CLEFSHAPE_TAB
};
    
/**
 * MEI data.KEYSIGNATURE
 * The maximum is 255 (unsigned char)
 * Order for 7f to 7s should not be changes. This is a special case since we use abs()
 * to get the number of flats or sharps
 */
enum data_KEYSIGNATURE {
    KEYSIGNATURE_NONE = 0,
    KEYSIGNATURE_7f,
    KEYSIGNATURE_6f,
    KEYSIGNATURE_5f,
    KEYSIGNATURE_4f,
    KEYSIGNATURE_3f,
    KEYSIGNATURE_2f,
    KEYSIGNATURE_1f,
    KEYSIGNATURE_0,
    KEYSIGNATURE_1s,
    KEYSIGNATURE_2s,
    KEYSIGNATURE_3s,
    KEYSIGNATURE_4s,
    KEYSIGNATURE_5s,
    KEYSIGNATURE_6s,
    KEYSIGNATURE_7s,
    KEYSIGNATURE_mixed
};
    
/**
 * MEI data.METERSIGN
 */
enum data_METERSIGN {
    METERSIGN_NONE = 0,
    METERSIGN_common,
    METERSIGN_cut
};

/**
 * MEI data.MENSURATIONSIGN
 */
enum data_MENSURATIONSIGN {
    MENSURATIONSIGN_NONE = 0,
    MENSURATIONSIGN_C,
    MENSURATIONSIGN_O
};

/**
 * MEI data.MODE
 */
enum data_MODE {
    MODE_NONE = 0,
    MODE_major,
    MODE_minor,
    MODE_dorian,
    MODE_phrygian,
    MODE_lydian,
    MODE_mixolydian,
    MODE_aeolian,
    MODE_locrian
};
    
/**
 * MEI data.OCTAVE.DIS
 */
enum data_OCTAVE_DIS {
    OCTAVE_DIS_NONE = 0,
    OCTAVE_DIS_8 = 8,
    OCTAVE_DIS_15 = 15,
    OCTAVE_DIS_22 = 22
};
    
/**
 * MEI data.PITCHNAME
 */
enum data_PITCHNAME {
    PITCHNAME_NONE = 0,
    PITCHNAME_c,
    PITCHNAME_d,
    PITCHNAME_e,
    PITCHNAME_f,
    PITCHNAME_g,
    PITCHNAME_a,
    PITCHNAME_b,
};

/**
 * MEI data.ORIENTATION
 */
enum data_ORIENTATION {
    ORIENTATION_NONE = 0,
    ORIENTATION_reversed,
    ORIENTATION_90CW,
    ORIENTATION_90CCW
};
    
/**
 * MEI data.PLACE
 */
enum data_PLACE {
    PLACE_NONE = 0,
    PLACE_above,
    PLACE_below
};

} // namespace vrv

#endif // __ATT_DEF_H__