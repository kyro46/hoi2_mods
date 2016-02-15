
##############################
# Country definition for VEN #
##############################

province =
{ id         = 804
  anti_air   = 2
  air_base   = { size = 1 current_size = 1 }
  naval_base = { size = 6 current_size = 6 }
}              # Maracaibo
province = { id = 811 anti_air = 2 } # Caracas

#####################
# Country main data #
#####################

country =
{ tag                    = VEN
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 20
  capital                = 811
  manpower               = 12
  transports             = 30
  escorts                = 4
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 6
    political_left    = 1
    freedom           = 5
    free_market       = 7
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 3
  }
  nationalprovinces      = { 804 802 810 811 869 870 871 }
  ownedprovinces         = { 804 802 810 811 869 870 }
  controlledprovinces    = { 804 802 810 811 869 870 }
  # ROTW Minor Tech '36
  # Group D 1936 techs
  # ######################
  # GW fighter
  techapps               = { 4010 2150 2290 2300 2310 2400 1010 1190 1110 2450 2460 2510 5010 5020 5080 5090 5190 6010 }
  diplomacy =
  { relation = { tag = ARG value = 10 }
    relation = { tag = BOL value = -15 }
    relation = { tag = BRA value = 10 }
    relation = { tag = CHL value = 20 }
    relation = { tag = COL value = 20 }
    relation = { tag = ECU value = 20 }
    relation = { tag = ENG value = -10 }
    relation = { tag = PAR value = 10 }
    relation = { tag = PRU value = 10 }
    relation = { tag = URU value = 10 }
    relation = { tag = USA value = 125 }
  }
  headofstate            = { type = 9 id = 38001 }
  headofgovernment       = { type = 9 id = 38002 }
  foreignminister        = { type = 9 id = 38003 }
  armamentminister       = { type = 9 id = 38004 }
  ministerofsecurity     = { type = 9 id = 38005 }
  ministerofintelligence = { type = 9 id = 38006 }
  chiefofstaff           = { type = 9 id = 38007 }
  chiefofarmy            = { type = 9 id = 38008 }
  chiefofnavy            = { type = 9 id = 38009 }
  chiefofair             = { type = 9 id = 38010 }
  # Firepower
  # Rather wild estimations
  landunit =
  { id       = { type = 15800 id = 1 }
    name     = "Ejercito de Venezuela"
    location = 811
    division =
    { id       = { type = 15800 id = 2 }
      name     = "1a Div. de Inf. 'Eduardo Blanco'"
      extra    = anti_tank
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 15800 id = 3 }
      name     = "1a División de Guardia Naciónal"
      strength = 100
      type     = militia
    }
    division =
    { id       = { type = 15800 id = 4 }
      name     = "Los Caballos de Venezuela"
      strength = 100
      type     = cavalry
      extra    = artillery
    }
  }
}
