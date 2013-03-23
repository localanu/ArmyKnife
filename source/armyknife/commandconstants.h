#ifndef __COMMAND_CONSTANTS_H__
#define __COMMAND_CONSTANTS_H__

#define MSG_APPLY '000'
#define MSG_RESET '001'
#define MSG_CANCEL '002'
#define START_APPLY '003'
#define END_APPLY '004'
#define SELECTION_CHANGED '005'
#define STATUS_BAR_SET_MAX_VALUE '006'
#define STATUS_BAR_UPDATE '007'
#define STATUS_BAR_FILE '008'
#define STATUS_BAR_RESET '010'
#define INVALIDATE_LIST '011'

#define MSG_APPLY_TO_BOTH '012'
#define MSG_CLEAR_LIST '013'
#define MSG_PICTURE_CHECKBOX '015'
#define MSG_ARTIST_CHECKBOX '016'
#define MSG_ALBUM_CHECKBOX '017'
#define MSG_TITLE_CHECKBOX '020'
#define MSG_YEAR_CHECKBOX '021'
#define MSG_COMMENT_CHECKBOX '022'
#define MSG_TRACK_CHECKBOX '023'
#ifdef _TTE_
#define MSG_RATING_CHECKBOX 'T01'
#define MSG_TEMPO_CHECKBOX 'T02'
#define MSG_COMPOSER_CHECKBOX 'T03'
#define MSG_GENDER_CHECKBOX 'T04'
#endif
#define MSG_GENRE_CHECKBOX '024'
#define RADIO_BUTTON_EVENT '025'
#define MSG_GENRE_CHANGED '026'

#define MSG_PATTERN_CHANGED '027'
#define MSG_NEW_PATTERN '028'
#define MSG_DELETE_PATTERN '029'
#define MSG_PATTERN_CREATED '030'


#define MSG_FIRST_FILE '033'
#define MSG_LAST_FILE '034'
#define MSG_PREVIOUS_FILE '035'
#define MSG_NEXT_FILE '036'
#define MSG_SELECT_ALL '037'
#define MSG_SELECT_ALL_UNSUPPORTED '137'

#define MSG_PREVIOUS_MODE '038'
#define MSG_NEXT_MODE '039'

#define MSG_EDITOR_MODE '040'
#define MSG_TA_MODE '041'
#define MSG_NA_MODE '042'
#define MSG_MPEG_MODE '043'
#ifdef _TTE_
#define MSG_TT_INFO_MODE '044'
#endif

#define MSG_BEEP_ON_UNSUPPORTED '050'

#define MSG_CLEAR_CHECKBOX '060'

#define MSG_MAKE_APPLY_BUTTON_DEFAULT '080'
#define MSG_MAKE_APPLY_BUTTON_NOT_DEFAULT '081'

#define MSG_EDIT_CUT '091'
#define MSG_EDIT_COPY '092'
#define MSG_EDIT_PASTE '093'

#endif
