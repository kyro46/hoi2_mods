
##############################
# Country definition for ECU #
##############################

province =
{ id         = 815
  anti_air   = 2
  naval_base = { size = 3 current_size = 3 }
  air_base   = { size = 1 current_size = 1 }
}              # Quito

#####################
# Country main data #
#####################

country =
{ tag                    = ECU
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  capital                = 815
  manpower               = 8
  transports             = 12
  escorts                = 1
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 6
    free_market       = 8
    freedom           = 5
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 1
  }
  nationalprovinces      = { 814 815 817 818 }
  ownedprovinces         = { 814 815 817 818 }
  controlledprovinces    = { 814 815 817 818 }
  # ROTW Minor Tech '36
  # Group D 1936 techs
  # ######################
  # GW fighter
  techapps               = { 4010 2150 2290 2300 2310 1010 1190 1110 2450 2460 2510 5010 5080 5090 6010 }
  diplomacy =
  { relation = { tag = ARG value = 10 }
    relation = { tag = BOL value = -20 }
    relation = { tag = BRA value = 10 }
    relation = { tag = CHL value = 20 }
    relation = { tag = COL value = 20 }
    relation = { tag = PAR value = 25 }
    relation = { tag = PRU value = -50 }
    relation = { tag = URU value = 10 }
    relation = { tag = USA value = 75 }
    relation = { tag = VEN value = 20 }
  }
  headofstate            = { type = 9 id = 40001 }
  headofgovernment       = { type = 9 id = 40002 }
  foreignminister        = { type = 9 id = 40003 }
  armamentminister       = { type = 9 id = 40004 }
  ministerofsecurity     = { type = 9 id = 40005 }
  ministerofintelligence = { type = 9 id = 40006 }
  chiefofstaff           = { type = 9 id = 40007 }
  chiefofarmy            = { type = 9 id = 40008 }
  chiefofnavy            = { type = 9 id = 40009 }
  chiefofair             = { type = 9 id = 40010 }
  landunit =
  { id       = { type = 29000 id = 50 }
    name     = "Ejercito de Ecuador"
    location = 815
    division =
    { id       = { type = 29000 id = 5000 }
      name     = "1a Brigada de Infantería"
      strength = 100
      type     = infantry
      model    = 0
      extra    = anti_air
    }
  }
}
