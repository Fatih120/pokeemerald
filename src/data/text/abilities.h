const u8 gAbilityNames[ABILITIES_COUNT][ABILITY_NAME_LENGTH + 1] =
{
    [ABILITY_NONE] = _(" "),
    [ABILITY_JEALOUSY] = _("Jealousy"),
    [ABILITY_DRIZZLE] = _("Drizzle"),
    [ABILITY_SPEED_BOOST] = _("Speed Boost"),
    [ABILITY_GUARD_ARMOR] = _("Guard Armor"),
    [ABILITY_STURDY] = _("Sturdy"),
    [ABILITY_DAMP] = _("Moisture"),
    [ABILITY_LIMBER] = _("Limber"),
    [ABILITY_SAND_VEIL] = _("Sand Veil"),
    [ABILITY_STATIC] = _("Static"),
    [ABILITY_VOLT_ABSORB] = _("Calm Wind"),
    [ABILITY_WATER_ABSORB] = _("Evaporation"),
    [ABILITY_OBLIVIOUS] = _("Oblivious"),
    [ABILITY_UNCONSCIOUS] = _("Unconscious"),
    [ABILITY_FOCUS] = _("Focus"),
    [ABILITY_INSOMNIA] = _("Insomnia"),
    [ABILITY_MYSTERIOUS] = _("Mysterious"),
    [ABILITY_IMMUNITY] = _("Immunity"),
    [ABILITY_FLASH_FIRE] = _("Flash Fire"),
    [ABILITY_ADVENT] = _("Advent"),
    [ABILITY_OWN_TEMPO] = _("Own Tempo"),
    [ABILITY_GATE_KEEPER] = _("Gate Keeper"),
    [ABILITY_INTIMIDATE] = _("Intimidate"),
    [ABILITY_DARK_TAG] = _("Dark Tag"),
    [ABILITY_DOLL_WALL] = _("Doll Wall"),
    [ABILITY_PLAY_GHOST] = _("Play Ghost"),
    [ABILITY_LEVITATE] = _("Levitate"),
    [ABILITY_INFECTIOUS] = _("Infection"),
    [ABILITY_SYNCHRONIZE] = _("Synchronize"),
    [ABILITY_HAKUREI_MIKO] = _("Hakurei Miko"),
    [ABILITY_NATURAL_CURE] = _("Natural Cure"),
    [ABILITY_LIGHTNING_ROD] = _("Conductor"),
    [ABILITY_SERENE_GRACE] = _("Serene Grace"),
    [ABILITY_SWIFT_SWIM] = _("Swift Swim"),
    [ABILITY_CHLOROPHYLL] = _("Chlorophyll"),
    [ABILITY_DIVA] = _("Diva"),
    [ABILITY_TRACE] = _("Trace"),
    [ABILITY_UNZAN] = _("Unzan"),
    [ABILITY_POISON_BODY] = _("Poison Body"),
    [ABILITY_INNER_FOCUS] = _("Inner Focus"),
    [ABILITY_FIRE_VEIL] = _("Fire Veil"),
    [ABILITY_WATER_VEIL] = _("Water Veil"),
    [ABILITY_MAGNET_PULL] = _("Magnet Pull"),
    [ABILITY_SOUNDPROOF] = _("Soundproof"),
    [ABILITY_RAIN_DISH] = _("Rain Dish"),
    [ABILITY_SAND_STREAM] = _("Sand Stream"),
    [ABILITY_PRESSURE] = _("Pressure"),
    [ABILITY_ICE_WALL] = _("Wall Of Ice"),
    [ABILITY_EARLY_BIRD] = _("Early Bird"),
    [ABILITY_FLAME_BODY] = _("Flame Body"),
    [ABILITY_RUN_AWAY] = _("Run Away"),
    [ABILITY_KEEN_EYE] = _("Keen Eye"),
    [ABILITY_UNNATURAL_STRENGTH] = _("Superhuman"),
    [ABILITY_PICKUP] = _("Pickup"),
    [ABILITY_FRETFUL] = _("Fretful"),
    [ABILITY_HUSTLE] = _("Hustle"),
    [ABILITY_CUTE_CHARM] = _("Danmaku Star"),
    [ABILITY_YIN] = _("Yin"),
    [ABILITY_YANG] = _("Yang"),
    [ABILITY_FORECAST] = _("Forecast"),
    [ABILITY_COLLECTOR] = _("Collector"),
    [ABILITY_MAINTENANCE] = _("Maintenance"),
    [ABILITY_GUTS] = _("Guts"),
    [ABILITY_SPRING_CHARM] = _("Spring Charm"),
    [ABILITY_STRANGE_MIST] = _("Strange Mist"),
    [ABILITY_OVERGROW] = _("Overgrow"),
    [ABILITY_BLAZE] = _("Blaze"),
    [ABILITY_TORRENT] = _("Torrent"),
    [ABILITY_INNER_POWER] = _("Inner Power"),
    [ABILITY_ROCK_HEAD] = _("Rock Head"),
    [ABILITY_DROUGHT] = _("Drought"),
    [ABILITY_SHADOW_TAG] = _("Shadow Tag"),
    [ABILITY_VITAL_SPIRIT] = _("Vital Spirit"),
    [ABILITY_BARRIER] = _("Magi Barrier"),
    [ABILITY_PURE_POWER] = _("Pure Power"),
    [ABILITY_SHELL_ARMOR] = _("Shell Armour"),
    [ABILITY_CACOPHONY] = _("Cacophony"),
    [ABILITY_HISOUTEN] = _("Hisouten"),
};

// Strings should be 26-27 characters max.
const u8 *const gAbilityDescriptionPointers[ABILITIES_COUNT] =
{
    [ABILITY_NONE]               = (const u8 []) _("No special ability."),
    [ABILITY_JEALOUSY]           = (const u8 []) _("Repels wild puppet battles."),
    [ABILITY_DRIZZLE]            = (const u8 []) _("Brings rain into battles."),
    [ABILITY_SPEED_BOOST]        = (const u8 []) _("Increases Speed each turn."),
    [ABILITY_GUARD_ARMOR]        = (const u8 []) _("Guarded from critical hits."),
    [ABILITY_STURDY]             = (const u8 []) _("Negates 1-hit KO attacks."),
    [ABILITY_DAMP]               = (const u8 []) _("Disables explosive moves."),
    [ABILITY_LIMBER]             = (const u8 []) _("Prevents paralysis."),
    [ABILITY_SAND_VEIL]          = (const u8 []) _("Ups evasion in a sandstorm."),
    [ABILITY_STATIC]             = (const u8 []) _("Paralyzes foe on contact."),
    [ABILITY_VOLT_ABSORB]        = (const u8 []) _("Absorbs Wind-type moves."),
    [ABILITY_WATER_ABSORB]       = (const u8 []) _("Absorbs Water-type moves."),
    [ABILITY_OBLIVIOUS]          = (const u8 []) _("Prevents getting amazed."),
    [ABILITY_UNCONSCIOUS]        = (const u8 []) _("Disables weather effects."),
    [ABILITY_FOCUS]              = (const u8 []) _("Raises accuracy by 30%."),
    [ABILITY_INSOMNIA]           = (const u8 []) _("Prevents falling asleep."),
    [ABILITY_MYSTERIOUS]         = (const u8 []) _("Changes type to foe's move."),
    [ABILITY_IMMUNITY]           = (const u8 []) _("Prevents getting poisoned."),
    [ABILITY_FLASH_FIRE]         = (const u8 []) _("Fire upped when hit by Fire."),
    [ABILITY_ADVENT]             = (const u8 []) _("Stops additional statuses."),
    [ABILITY_OWN_TEMPO]          = (const u8 []) _("Prevents getting confused."),
    [ABILITY_GATE_KEEPER]        = (const u8 []) _("Can't be forcibly switched."),
    [ABILITY_INTIMIDATE]         = (const u8 []) _("Lowers the foe's Attack."),
    [ABILITY_DARK_TAG]           = (const u8 []) _("Prevents the foe's escape."),
    [ABILITY_DOLL_WALL]          = (const u8 []) _("Damages on contact."),
    [ABILITY_PLAY_GHOST]         = (const u8 []) _("Only hit by supereffective."),
    [ABILITY_LEVITATE]           = (const u8 []) _("Immune to Earth moves."),
    [ABILITY_INFECTIOUS]         = (const u8 []) _("Leaves spores on contact."),
    [ABILITY_SYNCHRONIZE]        = (const u8 []) _("Mirrors statuses to foe."),
    [ABILITY_HAKUREI_MIKO]       = (const u8 []) _("Prevents stat reductions."),
    [ABILITY_NATURAL_CURE]       = (const u8 []) _("Heals when switching out."),
    [ABILITY_LIGHTNING_ROD]      = (const u8 []) _("Lures all Wind-type moves."),
    [ABILITY_SERENE_GRACE]       = (const u8 []) _("Boosts moves' 2nd effect."),
    [ABILITY_SWIFT_SWIM]         = (const u8 []) _("Raises Speed in rain."),
    [ABILITY_CHLOROPHYLL]        = (const u8 []) _("Raises Speed in sunlight."),
    [ABILITY_DIVA]               = (const u8 []) _("Increases wild battle rate."),
    [ABILITY_TRACE]              = (const u8 []) _("Copies foe's ability."),
    [ABILITY_UNZAN]              = (const u8 []) _("Doubles own Attack."),
    [ABILITY_POISON_BODY]        = (const u8 []) _("Poisons the foe on contact."),
    [ABILITY_INNER_FOCUS]        = (const u8 []) _("Prevents flinching."),
    [ABILITY_FIRE_VEIL]          = (const u8 []) _("Prevents getting frozen."),
    [ABILITY_WATER_VEIL]         = (const u8 []) _("Prevents getting burned."),
    [ABILITY_MAGNET_PULL]        = (const u8 []) _("Traps Blade-type puppets."),
    [ABILITY_SOUNDPROOF]         = (const u8 []) _("Avoids sound-based moves."),
    [ABILITY_RAIN_DISH]          = (const u8 []) _("Recovers some HP in rain."),
    [ABILITY_SAND_STREAM]        = (const u8 []) _("Calls a sandstorm in battle."),
    [ABILITY_PRESSURE]           = (const u8 []) _("Raises foe's PP usage."),
    [ABILITY_ICE_WALL]           = (const u8 []) _("Halves Fire/Ice damage."),
    [ABILITY_EARLY_BIRD]         = (const u8 []) _("Wakes up twice as fast."),
    [ABILITY_FLAME_BODY]         = (const u8 []) _("Burns the foe on contact."),
    [ABILITY_RUN_AWAY]           = (const u8 []) _("Can escape any wild battle."),
    [ABILITY_KEEN_EYE]           = (const u8 []) _("Prevents accuracy loss."),
    [ABILITY_UNNATURAL_STRENGTH] = (const u8 []) _("Prevents Attack reduction."),
    [ABILITY_PICKUP]             = (const u8 []) _("Might pick up an item."),
    [ABILITY_FRETFUL]            = (const u8 []) _("Only moves every 2nd turn."),
    [ABILITY_HUSTLE]             = (const u8 []) _("Trades accuracy for power."),
    [ABILITY_CUTE_CHARM]         = (const u8 []) _("Amazes on contact."),
    [ABILITY_YIN]                = (const u8 []) _("Powers puppets with Yang."),
    [ABILITY_YANG]               = (const u8 []) _("Powers puppets with Yin."),
    [ABILITY_FORECAST]           = (const u8 []) _("Changes with the weather."),   // Now unused thanks to the Castform nuke.
    [ABILITY_COLLECTOR]          = (const u8 []) _("Prevents hold item theft."),
    [ABILITY_MAINTENANCE]        = (const u8 []) _("30% chance to cure status."),
    [ABILITY_GUTS]               = (const u8 []) _("Statuses up Attack by 50%."),
    [ABILITY_SPRING_CHARM]       = (const u8 []) _("Statuses up Def. by 50%."),
    [ABILITY_STRANGE_MIST]       = (const u8 []) _("Inverts drain effects."),
    [ABILITY_OVERGROW]           = (const u8 []) _("Ups Nature moves on low HP."),
    [ABILITY_BLAZE]              = (const u8 []) _("Ups Fire moves on low HP."),
    [ABILITY_TORRENT]            = (const u8 []) _("Ups Water moves on low HP."),
    [ABILITY_INNER_POWER]        = (const u8 []) _("Ups Dream moves on low HP."),
    [ABILITY_ROCK_HEAD]          = (const u8 []) _("Negates recoil damage."),
    [ABILITY_DROUGHT]            = (const u8 []) _("Brings sunlight to battle."),
    [ABILITY_SHADOW_TAG]         = (const u8 []) _("Traps grounded opponents."),
    [ABILITY_VITAL_SPIRIT]       = (const u8 []) _("Prevents falling asleep."),    // This ability is the exact same as Insomnia. Can it be reused somehow or just removed?
    [ABILITY_BARRIER]            = (const u8 []) _("Prevents ability reduction."), // Hakurei Miko is the same exact move as this. I think Hakurei Miko should be removed and used here instead.
    [ABILITY_PURE_POWER]         = (const u8 []) _("Raises Attack."),              // Same deal with Unzan.
    [ABILITY_SHELL_ARMOR]        = (const u8 []) _("Blocks critical hits."),       // Guard Armour.
    [ABILITY_CACOPHONY]          = (const u8 []) _("Avoids sound-based moves."),   // Soundproof.
    [ABILITY_HISOUTEN]           = (const u8 []) _("Negates weather effects."),    // Same as unconsious. Hisouten is cooler though.
};
