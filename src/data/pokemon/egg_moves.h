#define EGG_MOVES_SPECIES_OFFSET 20000
#define EGG_MOVES_TERMINATOR 0xFFFF
#define egg_moves(species, moves...) (SPECIES_##species + EGG_MOVES_SPECIES_OFFSET), moves

const u16 gEggMoves[] = {
    egg_moves(CSANAE,
              MOVE_LIGHT_SCREEN,
              MOVE_SKULL_BASH,
              MOVE_SAFEGUARD,
              MOVE_CHARM,
              MOVE_BATTLE_CHANT,
              MOVE_MAGICAL_LEAF,
              MOVE_NATURE_SOUND,
              MOVE_CURSE),

    egg_moves(ALICE,
              MOVE_BELLY_DRUM,
              MOVE_ANCIENT_POWER,
              MOVE_ROCK_WRECKER,
              MOVE_BITE,
              MOVE_OUTRAGE,
              MOVE_BEAT_UP,
              MOVE_SWORDS_DANCE,
              MOVE_TAILWIND),

    egg_moves(CLILYWHITE,
              MOVE_MIRROR_COAT,
              MOVE_HAZE,
              MOVE_MIST,
              MOVE_FORESIGHT,
              MOVE_FLAIL,
              MOVE_REFRESH,
              MOVE_MUD_SLAP,
              MOVE_YAWN),

    egg_moves(MEDICINE,
              MOVE_PURSUIT,
              MOVE_FAINT_ATTACK,
              MOVE_FORESIGHT,
              MOVE_STEEL_WING,
              MOVE_AIR_SLASH),

    egg_moves(CNAZRIN,
              MOVE_SCREECH,
              MOVE_FLAME_WHEEL,
              MOVE_FURY_SWIPES,
              MOVE_BITE,
              MOVE_COUNTER,
              MOVE_REVERSAL,
              MOVE_UPROAR,
              MOVE_SWAGGER),

    egg_moves(CTOKIKO,
              MOVE_FAINT_ATTACK,
              MOVE_DRAWN_LINE,
              MOVE_SCARY_FACE,
              MOVE_QUICK_ATTACK,
              MOVE_TRI_ATTACK,
              MOVE_ASTONISH,
              MOVE_SKY_ATTACK),

    egg_moves(CREMILIA,
              MOVE_PURSUIT,
              MOVE_SLAM,
              MOVE_SPITE,
              MOVE_BEAT_UP,
              MOVE_CROSS_POISON),

    egg_moves(CRUMIA,
              MOVE_FLAIL,
              MOVE_SAFEGUARD,
              MOVE_COUNTER,
              MOVE_RAPID_SPIN,
              MOVE_ROCK_WRECKER,
              MOVE_METAL_CLAW,
              MOVE_SWORDS_DANCE,
              MOVE_CRUSH_CLAW),

    egg_moves(SHANGHAI,
              MOVE_JAMMING,
              MOVE_DISABLE,
              MOVE_DOUBLE_EDGE,
              MOVE_FOCUS_ENERGY,
              MOVE_CHARM,
              MOVE_COUNTER,
              MOVE_BEAT_UP),

    egg_moves(HOURAI,
              MOVE_COUNTER,
              MOVE_DISABLE,
              MOVE_JAMMING,
              MOVE_DOUBLE_EDGE,
              MOVE_AMNESIA,
              MOVE_CONFUSION,
              MOVE_BEAT_UP),

    egg_moves(CSUIKA,
              MOVE_FAINT_ATTACK,
              MOVE_HYPNOSIS,
              MOVE_FLAIL,
              MOVE_SPITE,
              MOVE_DISABLE,
              MOVE_HOWL,
              MOVE_PSYCH_UP,
              MOVE_HEAT_WAVE),

    egg_moves(CMINORIKO,
              MOVE_QUICK_ATTACK,
              MOVE_PURSUIT,
              MOVE_FAINT_ATTACK,
              MOVE_RAZOR_WIND,
              MOVE_WHIRLWIND,
              MOVE_CURSE),

    egg_moves(CKEINE,
              MOVE_SWORDS_DANCE,
              MOVE_RAZOR_LEAF,
              MOVE_FLAIL,
              MOVE_SYNTHESIS,
              MOVE_CHARM,
              MOVE_INGRAIN),

    egg_moves(CIKU,
              MOVE_DRAWN_LINE,
              MOVE_SCREECH,
              MOVE_COUNTER,
              MOVE_PSYBEAM,
              MOVE_FLAIL,
              MOVE_NATURE_POWER,
              MOVE_LIGHT_SCREEN,
              MOVE_PURSUIT),

    egg_moves(CKOISHI,
              MOVE_BATON_PASS,
              MOVE_SCREECH,
              MOVE_GIGA_DRAIN,
              MOVE_SIGNAL_BEAM),

    egg_moves(CYAMAME,
              MOVE_FAINT_ATTACK,
              MOVE_SCREECH,
              MOVE_ANCIENT_POWER,
              MOVE_PURSUIT,
              MOVE_BEAT_UP,
              MOVE_UPROAR,
              MOVE_ROCK_WRECKER),

    egg_moves(CCHEN,
              MOVE_SPITE,
              MOVE_CHARM,
              MOVE_HYPNOSIS,
              MOVE_AMNESIA,
              MOVE_PSYCH_UP,
              MOVE_ASSIST),

    egg_moves(CYORIHIME,
              MOVE_HYPNOSIS,
              MOVE_PSYBEAM,
              MOVE_FORESIGHT,
              MOVE_LIGHT_SCREEN,
              MOVE_PSYCHO_CUT,
              MOVE_PSYCHIC,
              MOVE_CROSS_CHOP,
              MOVE_REFRESH),

    egg_moves(CKAGUYA,
              MOVE_ROCK_WRECKER,
              MOVE_FORESIGHT,
              MOVE_MEDITATE,
              MOVE_COUNTER,
              MOVE_REVERSAL,
              MOVE_BEAT_UP,
              MOVE_REVENGE,
              MOVE_SMELLING_SALT),

    egg_moves(CMOKOU,
              MOVE_BODY_SLAM,
              MOVE_SAFEGUARD,
              MOVE_CRUNCH,
              MOVE_THRASH,
              MOVE_FIRE_SPIN,
              MOVE_HOWL,
              MOVE_HEAT_WAVE),

    egg_moves(CHATATE,
              MOVE_MIST,
              MOVE_SPLASH,
              MOVE_BUBBLE_BEAM,
              MOVE_HAZE,
              MOVE_HEARTS_EYE,
              MOVE_SPLASHING,
              MOVE_ICE_BALL),

    egg_moves(LETTY,
              MOVE_ENCORE,
              MOVE_BARRIER,
              MOVE_KNOCK_OFF,
              MOVE_FIRE_PUNCH,
              MOVE_THUNDER_PUNCH,
              MOVE_ICE_PUNCH),

    egg_moves(CYUUGI,
              MOVE_LIGHT_SCREEN,
              MOVE_MEDITATE,
              MOVE_ROLLING_KICK,
              MOVE_ENCORE,
              MOVE_SMELLING_SALT,
              MOVE_COUNTER,
              MOVE_ROCK_WRECKER),

    egg_moves(TENSHI,
              MOVE_SWORDS_DANCE,
              MOVE_ENCORE,
              MOVE_REFLECT,
              MOVE_SYNTHESIS,
              MOVE_LEECH_LIFE,
              MOVE_INGRAIN,
              MOVE_MAGICAL_LEAF),

    egg_moves(CMURASA,
              MOVE_AURORA_BEAM,
              MOVE_MIRROR_COAT,
              MOVE_RAPID_SPIN,
              MOVE_HAZE,
              MOVE_SAFEGUARD,
              MOVE_CONFUSE_RAY),

    egg_moves(CKISUME,
              MOVE_DRAIN_PUNCH,
              MOVE_ROCK_WRECKER,
              MOVE_BLOCK),

    egg_moves(KOGASA,
              MOVE_FLAME_WHEEL,
              MOVE_THRASH,
              MOVE_DOUBLE_KICK,
              MOVE_HYPNOSIS,
              MOVE_CHARM,
              MOVE_HEAD_SMASH),

    egg_moves(SATORI,
              MOVE_SAFEGUARD,
              MOVE_BELLY_DRUM,
              MOVE_PSYCHO_CUT,
              MOVE_STOMP,
              MOVE_MUD_SLAP,
              MOVE_SLEEP_TALK,
              MOVE_SNORE),

    egg_moves(RAN,
              MOVE_STEEL_WING,
              MOVE_FORESIGHT,
              MOVE_FALSE_SWIPE,
              MOVE_RAZOR_WIND,
              MOVE_QUICK_ATTACK,
              MOVE_FLAIL,
              MOVE_ROOST,
              MOVE_CURSE),

    egg_moves(CDAIYOUSEI,
              MOVE_QUICK_ATTACK,
              MOVE_JAMMING,
              MOVE_HAZE,
              MOVE_FAINT_ATTACK,
              MOVE_FLAIL,
              MOVE_ENDEAVOR),

    egg_moves(CNITORI,
              MOVE_LICK,
              MOVE_PERISH_SONG,
              MOVE_DISABLE,
              MOVE_SCULPTURE,
              MOVE_SLAM,
              MOVE_ENCORE,
              MOVE_FAKE_OUT,
              MOVE_ICE_SHARD),

    egg_moves(CHINA,
              MOVE_HAZE,
              MOVE_CHARMING_LOOK,
              MOVE_LICK,
              MOVE_IMPRISON,
              MOVE_CURSE,
              MOVE_SHADOW_PUNCH,
              MOVE_EXPLOSION),

    egg_moves(CKOMACHI,
              MOVE_BUBBLE_BEAM,
              MOVE_DOUBLE_EDGE,
              MOVE_BARRIER,
              MOVE_RAPID_SPIN,
              MOVE_SCREECH,
              MOVE_ICE_SHARD),

    egg_moves(CYUYUKO,
              MOVE_PSYWAVE,
              MOVE_PERISH_SONG,
              MOVE_HAZE,
              MOVE_ASTONISH,
              MOVE_WILL_O_WISP,
              MOVE_GRUDGE,
              MOVE_EXPLOSION),

    egg_moves(MEILING,
              MOVE_ROCK_WRECKER,
              MOVE_FLAIL,
              MOVE_EXPLOSION,
              MOVE_BLOCK),

    egg_moves(CSAKUYA,
              MOVE_BARRIER,
              MOVE_ASSIST,
              MOVE_RECOLLECTION,
              MOVE_FIRE_PUNCH,
              MOVE_THUNDER_PUNCH,
              MOVE_ICE_PUNCH),

    egg_moves(CLUNASA,
              MOVE_DIG,
              MOVE_HAZE,
              MOVE_AMNESIA,
              MOVE_FLAIL,
              MOVE_SLAM,
              MOVE_KNOCK_OFF,
              MOVE_SWORDS_DANCE),

    egg_moves(CLYRICA,
              MOVE_SYNTHESIS,
              MOVE_LUNATIC,
              MOVE_REFLECT,
              MOVE_ANCIENT_POWER,
              MOVE_PSYCH_UP,
              MOVE_INGRAIN,
              MOVE_CURSE),

    egg_moves(CLAYLA,
              MOVE_ROCK_WRECKER,
              MOVE_ANCIENT_POWER,
              MOVE_BELLY_DRUM,
              MOVE_SCREECH,
              MOVE_SKULL_BASH,
              MOVE_PERISH_SONG,
              MOVE_SWORDS_DANCE),

    egg_moves(CRIN,
              MOVE_BELLY_DRUM,
              MOVE_MAGNITUDE,
              MOVE_BODY_SLAM,
              MOVE_CURSE,
              MOVE_SMELLING_SALT,
              MOVE_SLEEP_TALK,
              MOVE_SNORE,
              MOVE_SUBSTITUTE),

    egg_moves(RIN,
              MOVE_SCREECH,
              MOVE_PSYWAVE,
              MOVE_PSYBEAM,
              MOVE_DESTINY_BOND,
              MOVE_PAIN_SPLIT,
              MOVE_WILL_O_WISP),

    egg_moves(UTSUHO,
              MOVE_CRUNCH,
              MOVE_REVERSAL,
              MOVE_ROCK_WRECKER,
              MOVE_COUNTER,
              MOVE_MAGNITUDE,
              MOVE_SWORDS_DANCE,
              MOVE_CURSE,
              MOVE_CRUSH_CLAW),

    egg_moves(ICHIRIN,
              MOVE_PRESENT,
              MOVE_METRONOME,
              MOVE_HEAL_BELL,
              MOVE_AROMATHERAPY,
              MOVE_SUBSTITUTE),

    egg_moves(CSUNNYMILK,
              MOVE_FLAIL,
              MOVE_CONFUSION,
              MOVE_MEGA_DRAIN,
              MOVE_REFLECT,
              MOVE_AMNESIA,
              MOVE_LEECH_SEED,
              MOVE_ROCK_BULLET),

    egg_moves(SUNNYMILK,
              MOVE_STOMP,
              MOVE_FORESIGHT,
              MOVE_FOCUS_ENERGY,
              MOVE_SAFEGUARD,
              MOVE_DISABLE,
              MOVE_COUNTER,
              MOVE_CRUSH_CLAW,
              MOVE_SUBSTITUTE),

    egg_moves(CLUNACHILD,
              MOVE_FLAIL,
              MOVE_AURORA_BEAM,
              MOVE_BLACK_RIPPLE,
              MOVE_DISABLE,
              MOVE_SPLASH,
              MOVE_DARK_PULSE,
              MOVE_LAVA_PLUME),

    egg_moves(CSTARSAPPHIRE,
              MOVE_PSYBEAM,
              MOVE_HAZE,
              MOVE_HYDRO_PUMP,
              MOVE_SLEEP_TALK,
              MOVE_MUD_SLAP),

    egg_moves(CAYA,
              MOVE_PSYCHO_CUT,
              MOVE_HYPNOSIS,
              MOVE_MIMIC,
              MOVE_PSYCH_UP,
              MOVE_FAKE_OUT,
              MOVE_TRICK),

    egg_moves(AYA,
              MOVE_COUNTER,
              MOVE_SAFEGUARD,
              MOVE_BATON_PASS,
              MOVE_GUST,
              MOVE_REVERSAL,
              MOVE_LIGHT_SCREEN,
              MOVE_ENDURE,
              MOVE_SILVER_WIND),

    egg_moves(SHOU,
              MOVE_MAGIC_KNIFE,
              MOVE_FLAIL,
              MOVE_DRAWN_LINE,
              MOVE_FAINT_ATTACK),

    egg_moves(TEWI,
              MOVE_FORESIGHT,
              MOVE_SUBSTITUTE,
              MOVE_TICKLE,
              MOVE_REFRESH,
              MOVE_TAILWIND,
              MOVE_CURSE,
              MOVE_SLEEP_TALK,
              MOVE_SCULPTURE),

    egg_moves(CNUE,
              MOVE_CHARM,
              MOVE_FLAIL,
              MOVE_ENDURE,
              MOVE_CURSE,
              MOVE_TICKLE,
              MOVE_WISH),

    egg_moves(CMARISA,
              MOVE_BUBBLE_BEAM,
              MOVE_AURORA_BEAM,
              MOVE_SLAM,
              MOVE_JAMMING,
              MOVE_HAZE,
              MOVE_ROCK_WRECKER,
              MOVE_SPIKES),

    egg_moves(CREIMU,
              MOVE_BUBBLE_BEAM,
              MOVE_AURORA_BEAM,
              MOVE_RAPID_SPIN,
              MOVE_DIG,
              MOVE_FLAIL,
              MOVE_KNOCK_OFF,
              MOVE_CONFUSE_RAY),

    egg_moves(CBYAKUREN,
              MOVE_WHIRLWIND,
              MOVE_PURSUIT,
              MOVE_FORESIGHT,
              MOVE_STEEL_WING,
              MOVE_LAVA_PLUME,
              MOVE_CURSE),

    egg_moves(BYAKUREN,
              MOVE_LICK,
              MOVE_CHARM,
              MOVE_HEAD_SMASH,
              MOVE_CURSE,
              MOVE_FISSURE,
              MOVE_SUBSTITUTE),

    egg_moves(CTOYOHIME,
              MOVE_LIGHT_SCREEN,
              MOVE_MIST,
              MOVE_HAZE,
              MOVE_JAMMING,
              MOVE_LAVA_PLUME,
              MOVE_TAILWIND),

    egg_moves(GENJII,
              MOVE_VINE_WHIP,
              MOVE_LEECH_SEED,
              MOVE_COUNTER,
              MOVE_ANCIENT_POWER,
              MOVE_FLAIL,
              MOVE_ROCK_BULLET,
              MOVE_INGRAIN,
              MOVE_NATURE_SOUND),

    egg_moves(CELLY,
              MOVE_FURY_SWIPES,
              MOVE_QUICK_ATTACK,
              MOVE_REVERSAL,
              MOVE_THRASH,
              MOVE_FORESIGHT,
              MOVE_COVET,
              MOVE_HOWL,
              MOVE_CRUSH_CLAW),

    egg_moves(ORANGE,
              MOVE_CRUNCH,
              MOVE_THRASH,
              MOVE_HYDRO_PUMP,
              MOVE_ANCIENT_POWER,
              MOVE_ROCK_WRECKER,
              MOVE_MUD_SLAP,
              MOVE_SPLASHING,
              MOVE_HEART_BREAK),

    egg_moves(CHIYURI,
              MOVE_HEAD_SMASH,
              MOVE_PURSUIT,
              MOVE_SLASH,
              MOVE_FOCUS_ENERGY,
              MOVE_REVERSAL,
              MOVE_SUBSTITUTE,
              MOVE_TRICK,
              MOVE_ASSIST),

    egg_moves(YUMEMI,
              MOVE_FALSE_SWIPE,
              MOVE_JAMMING,
              MOVE_FAINT_ATTACK,
              MOVE_GALE,
              MOVE_WHIRLWIND,
              MOVE_SKY_ATTACK,
              MOVE_ROOST),

    egg_moves(ELLEN,
              MOVE_PSYBEAM,
              MOVE_GUARD,
              MOVE_SILVER_WIND),

    egg_moves(KAZAMI,
              MOVE_PSYBEAM,
              MOVE_DISABLE,
              MOVE_SONIC_BOOM,
              MOVE_BATON_PASS,
              MOVE_PURSUIT,
              MOVE_SIGNAL_BEAM),

    egg_moves(CSARA,
              MOVE_FLAIL,
              MOVE_SCREECH,
              MOVE_AMNESIA),

    egg_moves(CLUIZE,
              MOVE_REVERSAL,
              MOVE_GUARD,
              MOVE_PRESENT,
              MOVE_ENCORE,
              MOVE_DOUBLE_SLAP,
              MOVE_WISH,
              MOVE_CHARGE),

    egg_moves(LUIZE,
              MOVE_PRESENT,
              MOVE_METRONOME,
              MOVE_AMNESIA,
              MOVE_BELLY_DRUM,
              MOVE_SPLASH,
              MOVE_MIMIC,
              MOVE_WISH,
              MOVE_SUBSTITUTE),

    egg_moves(CMARGATROID,
              MOVE_PERISH_SONG,
              MOVE_PRESENT,
              MOVE_FAINT_ATTACK,
              MOVE_WISH,
              MOVE_FAKE_TEARS),

    egg_moves(MARGATROID,
              MOVE_PRESENT,
              MOVE_FALSE_SWIPE,
              MOVE_PECK,
              MOVE_FORESIGHT,
              MOVE_PSYCHO_CUT,
              MOVE_SUBSTITUTE,
              MOVE_PSYCH_UP),

    egg_moves(KANA,
              MOVE_HAZE,
              MOVE_WING_ATTACK,
              MOVE_QUICK_ATTACK,
              MOVE_FAINT_ATTACK,
              MOVE_STEEL_WING,
              MOVE_PSYCH_UP,
              MOVE_ROOST,
              MOVE_REFRESH),

    egg_moves(HAKUREI,
              MOVE_DOUBLE_EDGE,
              MOVE_BODY_SLAM,
              MOVE_SAFEGUARD,
              MOVE_SCREECH,
              MOVE_REFLECT,
              MOVE_DOUBLE_TEAM,
              MOVE_CHARGE),

    egg_moves(KOTOHIME,
              MOVE_LIGHT_SCREEN,
              MOVE_PRESENT,
              MOVE_AMNESIA,
              MOVE_PSYCHO_CUT,
              MOVE_BELLY_DRUM,
              MOVE_PERISH_SONG,
              MOVE_JAMMING,
              MOVE_SUBSTITUTE),

    egg_moves(YUMEKO,
              MOVE_SELF_DESTRUCT),

    egg_moves(SHINKI,
              MOVE_CONFUSION,
              MOVE_ENCORE,
              MOVE_HEAD_SMASH,
              MOVE_REFLECT,
              MOVE_AMNESIA,
              MOVE_HELPING_HAND,
              MOVE_PSYCH_UP),

    egg_moves(CRIKA,
              MOVE_COUNTER,
              MOVE_SCREECH,
              MOVE_PURSUIT,
              MOVE_AGILITY,
              MOVE_SPITE,
              MOVE_SLAM,
              MOVE_DOUBLE_SLAP,
              MOVE_BEAT_UP),

    egg_moves(RIKA,
              MOVE_NATURE_SOUND,
              MOVE_ENCORE,
              MOVE_LEECH_SEED,
              MOVE_ROCK_BULLET,
              MOVE_CURSE,
              MOVE_HELPING_HAND),

    egg_moves(MUGETSU,
              MOVE_WHIRLWIND,
              MOVE_REVERSAL,
              MOVE_LEECH_LIFE,
              MOVE_SIGNAL_BEAM,
              MOVE_SILVER_WIND),

    egg_moves(CGENGETSU,
              MOVE_BODY_SLAM,
              MOVE_ANCIENT_POWER,
              MOVE_SAFEGUARD,
              MOVE_CURSE,
              MOVE_MUD_SLAP,
              MOVE_STOCKPILE,
              MOVE_SWALLOW,
              MOVE_MIRROR_SHOT),

    egg_moves(CRIKAKO,
              MOVE_WHIRLWIND,
              MOVE_WING_ATTACK,
              MOVE_FALSE_SWIPE,
              MOVE_GALE,
              MOVE_SKY_ATTACK,
              MOVE_CONFUSE_RAY,
              MOVE_ROOST,
              MOVE_PERISH_SONG),

    egg_moves(CYUKI,
              MOVE_SCREECH,
              MOVE_DESTINY_BOND,
              MOVE_PSYCH_UP,
              MOVE_IMPRISON),

    egg_moves(MAI,
              MOVE_DOUBLE_EDGE,
              MOVE_AMNESIA,
              MOVE_FORESIGHT,
              MOVE_PSYCHO_CUT,
              MOVE_BEAT_UP,
              MOVE_PSYCH_UP,
              MOVE_WISH,
              MOVE_MAGIC_COAT),

    egg_moves(DSUNNYMILK,
              MOVE_REFLECT,
              MOVE_PIN_MISSILE,
              MOVE_FLAIL,
              MOVE_SWIFT,
              MOVE_COUNTER,
              MOVE_SAND_TOMB),

    egg_moves(HSTARSAPPHIRE,
              MOVE_GUARD,
              MOVE_ANCIENT_POWER,
              MOVE_ROCK_WRECKER,
              MOVE_BITE,
              MOVE_HEADBUTT,
              MOVE_ASTONISH,
              MOVE_CURSE),

    egg_moves(ANITORI,
              MOVE_METAL_CLAW,
              MOVE_GALE,
              MOVE_GUST,
              MOVE_COUNTER,
              MOVE_SAND_TOMB),

    egg_moves(AMOKOU,
              MOVE_METRONOME,
              MOVE_FAINT_ATTACK,
              MOVE_REFLECT,
              MOVE_PRESENT,
              MOVE_CRUNCH,
              MOVE_HEAL_BELL,
              MOVE_SNORE,
              MOVE_SMELLING_SALT),

    egg_moves(DREISEN,
              MOVE_FLAIL,
              MOVE_HAZE,
              MOVE_BUBBLE_BEAM,
              MOVE_JAMMING,
              MOVE_ASTONISH),

    egg_moves(TSAKUYA,
              MOVE_NATURE_POWER),

    egg_moves(HSAKUYA,
              MOVE_HARDEN,
              MOVE_GUARD,
              MOVE_FLAIL,
              MOVE_DRAWN_LINE),

    egg_moves(ARUMIA,
              MOVE_COUNTER,
              MOVE_SPITE,
              MOVE_FORESIGHT,
              MOVE_REFLECT,
              MOVE_BITE,
              MOVE_CRUSH_CLAW,
              MOVE_FAKE_OUT),

    egg_moves(SRUMIA,
              MOVE_CRUNCH,
              MOVE_DOUBLE_EDGE,
              MOVE_SEISMIC_TOSS,
              MOVE_COUNTER,
              MOVE_METAL_CLAW,
              MOVE_FAKE_TEARS,
              MOVE_YAWN,
              MOVE_SLEEP_TALK),

    egg_moves(AMYSTIA,
              MOVE_DISPERSE,
              MOVE_HEAT_WAVE),

    egg_moves(TCHEN,
              MOVE_DOUBLE_EDGE,
              MOVE_BITE,
              MOVE_BODY_SLAM,
              MOVE_ROCK_WRECKER,
              MOVE_ANCIENT_POWER,
              MOVE_EARTH_POWER,
              MOVE_ICE_SHARD,
              MOVE_HEAD_SMASH),

    egg_moves(SYOUMU,
              MOVE_ROCK_WRECKER,
              MOVE_SCREECH,
              MOVE_MIST,
              MOVE_AMNESIA,
              MOVE_BARRIER,
              MOVE_INGRAIN,
              MOVE_CONFUSE_RAY,
              MOVE_ICE_SHARD),

    egg_moves(AYUUKA,
              MOVE_AURORA_BEAM,
              MOVE_BLACK_RIPPLE,
              MOVE_JAMMING,
              MOVE_HAZE,
              MOVE_SCREECH,
              MOVE_THUNDER_WAVE,
              MOVE_ROCK_BLAST),

    egg_moves(SAYA,
              MOVE_AURORA_BEAM,
              MOVE_QUICK_ATTACK,
              MOVE_PSYCHO_CUT,
              MOVE_SPLASH,
              MOVE_RAPID_SPIN,
              MOVE_ICE_BALL),

    egg_moves(TAYA,
              MOVE_TWISTER,
              MOVE_HYDRO_PUMP,
              MOVE_HAZE,
              MOVE_SLAM,
              MOVE_MUD_SLAP,
              MOVE_ROCK_WRECKER),

    egg_moves(ATENSHI,
              MOVE_WING_ATTACK,
              MOVE_PURSUIT,
              MOVE_WHIRLWIND,
              MOVE_SKY_ATTACK,
              MOVE_CURSE),

    egg_moves(DTENSHI,
              MOVE_FIRE_SPIN,
              MOVE_RAGE,
              MOVE_PURSUIT,
              MOVE_COUNTER,
              MOVE_SPITE,
              MOVE_REVERSAL,
              MOVE_BEAT_UP,
              MOVE_WILL_O_WISP),

    egg_moves(AKOISHI,
              MOVE_FOCUS_ENERGY,
              MOVE_BODY_SLAM,
              MOVE_ANCIENT_POWER,
              MOVE_SNORE,
              MOVE_COUNTER,
              MOVE_FISSURE),

    egg_moves(TBYAKUREN,
              MOVE_SPITE,
              MOVE_DISABLE,
              MOVE_BITE,
              MOVE_SWAGGER,
              MOVE_PSYCH_UP,
              MOVE_EXTRASENSORY),

    egg_moves(TICHIRIN,
              MOVE_RAPID_SPIN,
              MOVE_HI_JUMP_KICK,
              MOVE_MACH_PUNCH,
              MOVE_HEARTS_EYE,
              MOVE_HELPING_HAND),

    egg_moves(DKANAKO,
              MOVE_MEDITATE,
              MOVE_PSYCH_UP,
              MOVE_FAKE_OUT,
              MOVE_WISH,
              MOVE_ICE_PUNCH),

    egg_moves(AKAGUYA,
              MOVE_KARATE_CHOP,
              MOVE_BARRIER,
              MOVE_ROLLING_KICK,
              MOVE_MEDITATE,
              MOVE_CROSS_CHOP,
              MOVE_FIRE_PUNCH,
              MOVE_ICE_PUNCH),

    egg_moves(DKAGUYA,
              MOVE_KARATE_CHOP,
              MOVE_DRAIN_PUNCH,
              MOVE_BARRIER,
              MOVE_SCREECH,
              MOVE_CROSS_CHOP,
              MOVE_THUNDER_PUNCH),

    egg_moves(SHINGYOKUO,
              MOVE_PRESENT,
              MOVE_REVERSAL,
              MOVE_SEISMIC_TOSS,
              MOVE_ENDURE,
              MOVE_PSYCH_UP,
              MOVE_CURSE,
              MOVE_HELPING_HAND,
              MOVE_SLEEP_TALK),

    egg_moves(DMOMIJI,
              MOVE_PURSUIT,
              MOVE_STOMP,
              MOVE_OUTRAGE,
              MOVE_FOCUS_ENERGY,
              MOVE_ANCIENT_POWER,
              MOVE_TAILWIND,
              MOVE_CURSE),

    egg_moves(HEIRIN,
              MOVE_CRUNCH,
              MOVE_MUD_SLAP,
              MOVE_ENDEAVOR,
              MOVE_LEECH_SEED,
              MOVE_LAVA_PLUME,
              MOVE_CRUSH_CLAW),

    egg_moves(AALICE,
              MOVE_COUNTER,
              MOVE_REVERSAL,
              MOVE_ENDURE,
              MOVE_SWAGGER,
              MOVE_ROCK_WRECKER,
              MOVE_SMELLING_SALT),

    egg_moves(DREIMU,
              MOVE_REFRESH,
              MOVE_UPROAR,
              MOVE_CURSE,
              MOVE_STOMP,
              MOVE_ICE_BALL,
              MOVE_MIRROR_COAT),

    egg_moves(DYUYUKO,
              MOVE_ASTONISH,
              MOVE_CROSS_POISON,
              MOVE_COVET,
              MOVE_LEER,
              MOVE_YAWN),

    egg_moves(HLUNASA,
              MOVE_CHARM,
              MOVE_PURSUIT,
              MOVE_SUBSTITUTE,
              MOVE_TICKLE,
              MOVE_TRICK),

    egg_moves(AHINA,
              MOVE_SYNTHESIS,
              MOVE_RAZOR_LEAF,
              MOVE_NATURE_POWER,
              MOVE_LEECH_SEED,
              MOVE_FLAIL,
              MOVE_WATER_GUN),

    egg_moves(SRIN,
              MOVE_LEECH_SEED,
              MOVE_AMNESIA,
              MOVE_QUICK_ATTACK,
              MOVE_GUST,
              MOVE_DOUBLE_EDGE,
              MOVE_DRAWN_LINE),

    egg_moves(HSHIZUHA,
              MOVE_ENDURE,
              MOVE_FAINT_ATTACK,
              MOVE_RAZOR_WIND,
              MOVE_SILVER_WIND),

    egg_moves(TSHOU,
              MOVE_PURSUIT,
              MOVE_JAMMING,
              MOVE_REFRESH,
              MOVE_FALSE_SWIPE,
              MOVE_RAGE,
              MOVE_SKY_ATTACK),

    egg_moves(DSUWAKO,
              MOVE_FAKE_TEARS,
              MOVE_SWAGGER,
              MOVE_CHARM,
              MOVE_DRAWN_LINE,
              MOVE_HELPING_HAND),

    egg_moves(SKOGASA,
              MOVE_ENCORE,
              MOVE_ROCK_WRECKER,
              MOVE_ASSIST,
              MOVE_DISABLE,
              MOVE_BATON_PASS,
              MOVE_WISH,
              MOVE_TRICK,
              MOVE_SMELLING_SALT),

    egg_moves(TKOGASA,
              MOVE_MIST,
              MOVE_TWISTER,
              MOVE_AGILITY,
              MOVE_RAZOR_WIND,
              MOVE_SPLASHING),

    egg_moves(SFLANDRE,
              MOVE_FORESIGHT,
              MOVE_EARTH_POWER,
              MOVE_PSYBEAM,
              MOVE_HYDRO_PUMP,
              MOVE_HEARTS_EYE),

    egg_moves(DMEILING,
              MOVE_HEAD_SMASH,
              MOVE_THRASH,
              MOVE_SWAGGER,
              MOVE_SNORE,
              MOVE_SLEEP_TALK,
              MOVE_CURSE,
              MOVE_FISSURE,
              MOVE_TICKLE),

    egg_moves(ASUNNYMILK,
              MOVE_HELPING_HAND,
              MOVE_PSYCH_UP,
              MOVE_UPROAR,
              MOVE_FAKE_TEARS,
              MOVE_WISH,
              MOVE_BATON_PASS,
              MOVE_SUBSTITUTE,
              MOVE_TICKLE),

    egg_moves(SWRIGGLE,
              MOVE_DISABLE,
              MOVE_MAGIC_COAT,
              MOVE_TRICK),

    egg_moves(CELIS,
              MOVE_MAGNITUDE,
              MOVE_TREMORS,
              MOVE_EXPLOSION),

    egg_moves(CSARIEL,
              MOVE_ERUPTION,
              MOVE_ENDURE,
              MOVE_SLEEP_TALK,
              MOVE_YAWN),

    egg_moves(ADMYSTIA,
              MOVE_PSYCH_UP,
              MOVE_RECOVER,
              MOVE_LUNATIC),

    egg_moves(THATATE,
              MOVE_THRASH,
              MOVE_WHIRLPOOL,
              MOVE_SPARK),

    egg_moves(AKISISTERS,
              MOVE_SPLASH,
              MOVE_JAMMING,
              MOVE_SPLASHING,
              MOVE_MUD_SLAP),

    egg_moves(DLAYLA,
              MOVE_MUD_SLAP,
              MOVE_ENDEAVOR,
              MOVE_BODY_SLAM,
              MOVE_ANCIENT_POWER),

    egg_moves(AREMILIA,
              MOVE_MIRROR_COAT,
              MOVE_LAVA_PLUME,
              MOVE_MUD_SLAP,
              MOVE_HYPNOSIS,
              MOVE_LIGHT_SCREEN,
              MOVE_CONFUSE_RAY),

    egg_moves(ATEWI,
              MOVE_HYDRO_PUMP,
              MOVE_HEAD_SMASH,
              MOVE_THRASH),

    egg_moves(DMINORIKO,
              MOVE_FOCUS_ENERGY,
              MOVE_QUICK_ATTACK,
              MOVE_RAZOR_WIND),

    egg_moves(AFLANDRE,
              MOVE_FAINT_ATTACK,
              MOVE_DETECT,
              MOVE_FORESIGHT,
              MOVE_HELPING_HAND,
              MOVE_CROSS_CHOP,
              MOVE_REVENGE,
              MOVE_DYNAMIC_PUNCH,
              MOVE_COUNTER),

    egg_moves(ASHIKIEIKI,
              MOVE_CRUNCH,
              MOVE_HEADBUTT,
              MOVE_UPROAR,
              MOVE_CURSE,
              MOVE_SWIFT),

    egg_moves(CKONNGARA,
              MOVE_HOWL,
              MOVE_SCARY_FACE,
              MOVE_BODY_SLAM,
              MOVE_TREMORS,
              MOVE_DEFENSE_CURL,
              MOVE_STOMP),

    egg_moves(ASUIKA,
              MOVE_SPLASHING,
              MOVE_STOCKPILE,
              MOVE_SWALLOW,
              MOVE_MIRROR_SHOT,
              MOVE_YAWN,
              MOVE_ROCK_WRECKER,
              MOVE_CURSE,
              MOVE_FISSURE),

    egg_moves(ANUE,
              MOVE_NATURE_SOUND,
              MOVE_ACID,
              MOVE_TEETER_DANCE,
              MOVE_DYNAMIC_PUNCH,
              MOVE_COUNTER),

    egg_moves(DPATCHOULI,
              MOVE_BLOCK,
              MOVE_SPIKES),

    egg_moves(CSHINGYOKU,
              MOVE_ENCORE,
              MOVE_SING,
              MOVE_REFRESH,
              MOVE_SLAM,
              MOVE_TICKLE),

    egg_moves(ALILYBLACK,
              MOVE_PSYCHO_CUT,
              MOVE_EXTRASENSORY,
              MOVE_SUBSTITUTE,
              MOVE_TRICK),

    egg_moves(TNAZRIN,
              MOVE_SUBSTITUTE,
              MOVE_WISH),

    egg_moves(HNAZRIN,
              MOVE_SUBSTITUTE,
              MOVE_WISH),

    egg_moves(TKISUME,
              MOVE_SWORDS_DANCE,
              MOVE_DRAWN_LINE,
              MOVE_CROSS_POISON,
              MOVE_PSYCH_UP,
              MOVE_ANCIENT_POWER,
              MOVE_TICKLE),

    egg_moves(AYUUGI,
              MOVE_FIRE_PUNCH,
              MOVE_THUNDER_PUNCH,
              MOVE_ICE_PUNCH,
              MOVE_FORESIGHT,
              MOVE_FAKE_OUT,
              MOVE_BATON_PASS,
              MOVE_DYNAMIC_PUNCH),

    egg_moves(DIKU,
              MOVE_AGILITY,
              MOVE_HAZE,
              MOVE_PURSUIT,
              MOVE_RAGE),

    egg_moves(RINNOSUKE,
              MOVE_IMPRISON,
              MOVE_DESTINY_BOND,
              MOVE_PAIN_SPLIT,
              MOVE_GRUDGE,
              MOVE_MEMENTO,
              MOVE_FAINT_ATTACK),

    egg_moves(ADREISEN,
              MOVE_SPIKES,
              MOVE_SYNTHESIS,
              MOVE_PIN_MISSILE,
              MOVE_COTTON_SPORE),

    egg_moves(SSARIEL,
              MOVE_PURSUIT,
              MOVE_SLASH,
              MOVE_BODY_SLAM,
              MOVE_SNORE,
              MOVE_CRUSH_CLAW,
              MOVE_CURSE,
              MOVE_SLEEP_TALK),

    egg_moves(CKIKURI,
              MOVE_DREAM_EATER,
              MOVE_DISPERSE,
              MOVE_TOXIC_GAS,
              MOVE_PAIN_SPLIT),

    egg_moves(APATCHOULI,
              MOVE_HEADBUTT,
              MOVE_SLAM,
              MOVE_GUST,
              MOVE_LEECH_SEED,
              MOVE_ROCK_BULLET),

    egg_moves(SMARISA,
              MOVE_DOUBLE_EDGE,
              MOVE_SNORE,
              MOVE_SWAGGER,
              MOVE_EXTRASENSORY,
              MOVE_SMELLING_SALT),

    egg_moves(AMURASA,
              MOVE_REFRESH,
              MOVE_MUD_SLAP,
              MOVE_BODY_SLAM,
              MOVE_JAMMING,
              MOVE_BARRIER,
              MOVE_CONFUSE_RAY),

    egg_moves(SMEDICINE,
              MOVE_BATON_PASS,
              MOVE_FAINT_ATTACK,
              MOVE_HEAD_SMASH,
              MOVE_MAGIC_COAT,
              MOVE_CURSE,
              MOVE_SUBSTITUTE),

    egg_moves(DDAIYOUSEI,
              MOVE_DISABLE,
              MOVE_DESTINY_BOND,
              MOVE_FORESIGHT,
              MOVE_ASTONISH,
              MOVE_IMPRISON),

    egg_moves(TSATORI,
              MOVE_STOCKPILE,
              MOVE_SWALLOW,
              MOVE_MIRROR_SHOT,
              MOVE_BODY_SLAM),

    egg_moves(DSATORI,
              MOVE_FLAIL,
              MOVE_DOUBLE_KICK,
              MOVE_GUST,
              MOVE_COUNTER,
              MOVE_ROAR,
              MOVE_CURSE),

    egg_moves(ADLETTY,
              MOVE_MAGNITUDE,
              MOVE_SKULL_BASH,
              MOVE_SPLASHING,
              MOVE_AMNESIA,
              MOVE_SLEEP_TALK,
              MOVE_ROCK_WRECKER),

    egg_moves(ADTEWI,
              MOVE_ENDEAVOR,
              MOVE_BODY_SLAM,
              MOVE_STOMP,
              MOVE_SMELLING_SALT),

    egg_moves(TSANAE,
              MOVE_PSYCHO_CUT,
              MOVE_PSYCH_UP),

    egg_moves(YUKI,
              MOVE_BATON_PASS,
              MOVE_SILVER_WIND,
              MOVE_TRICK),

    egg_moves(ADMOKOU,
              MOVE_BATON_PASS,
              MOVE_SILVER_WIND,
              MOVE_GROWTH),

    egg_moves(ADYUKARI,
              MOVE_BARRIER,
              MOVE_RECOVER,
              MOVE_MIRROR_COAT,
              MOVE_ROCK_WRECKER),

    egg_moves(ADCHEN,
              MOVE_RAPID_SPIN,
              MOVE_KNOCK_OFF,
              MOVE_SWORDS_DANCE,
              MOVE_ROCK_WRECKER),

    egg_moves(TENMA,
              MOVE_DISABLE,
              MOVE_WILL_O_WISP,
              MOVE_CHARMING_LOOK,
              MOVE_MEMENTO,
              MOVE_DESTINY_BOND),

    egg_moves(KYOUKO,
              MOVE_HYDRO_PUMP,
              MOVE_THRASH,
              MOVE_DARK_PULSE,
              MOVE_TWISTER,
              MOVE_TAILWIND),

    egg_moves(CWAKASAGI,
              MOVE_DISABLE,
              MOVE_CURSE,
              MOVE_HYPNOSIS,
              MOVE_DREAM_EATER),

    EGG_MOVES_TERMINATOR
};
