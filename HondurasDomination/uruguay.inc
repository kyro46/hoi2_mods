
##############################
# Country definition for URU #
##############################

province =
{ id         = 849
  anti_air   = 1
  air_base   = { size = 1 current_size = 1 }
  naval_base = { size = 6 current_size = 6 }
}              # Montevideo

#####################
# Country main data #
#####################

country =
{ tag                    = URU
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  capital                = 849
  manpower               = 7
  transports             = 30
  escorts                = 4
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 2
    freedom           = 5
    free_market       = 5
    professional_army = 2
    defense_lobby     = 4
    interventionism   = 1
  }
  nationalprovinces      = { 849 }
  ownedprovinces         = { 849 }
  controlledprovinces    = { 849 }
  # ROTW Minor Tech '36
  # Group D 1936 techs
  # ######################
  # GW fighter
  techapps               = { 4010 2150 2290 2300 2310 1010 1190 1110 2450 2460 2510 5010 5020 5080 5090 5190 6010 }
  diplomacy =
  { relation = { tag = ARG value = -50 }
    relation = { tag = BOL value = 10 }
    relation = { tag = BRA value = 125 }
    relation = { tag = CHL value = 20 }
    relation = { tag = COL value = 10 }
    relation = { tag = ECU value = 10 }
    relation = { tag = PAR value = 20 }
    relation = { tag = PRU value = 25 }
    relation = { tag = SOV value = -100 }
    relation = { tag = USA value = 100 }
    relation = { tag = VEN value = 10 }
  }
  headofstate            = { type = 9 id = 41001 }
  headofgovernment       = { type = 9 id = 41002 }
  foreignminister        = { type = 9 id = 41003 }
  armamentminister       = { type = 9 id = 41004 }
  ministerofsecurity     = { type = 9 id = 41005 }
  ministerofintelligence = { type = 9 id = 41006 }
  chiefofstaff           = { type = 9 id = 41007 }
  chiefofarmy            = { type = 9 id = 41008 }
  chiefofnavy            = { type = 9 id = 41009 }
  chiefofair             = { type = 9 id = 41010 }
  landunit =
  { id       = { type = 13700 id = 1 }
    name     = "Ejercito de Uruguay"
    location = 849
    division =
    { id       = { type = 13700 id = 2 }
      name     = "4a Brigada de Inf. 'Don Claudio'"
      strength = 100
      type     = infantry
      extra    = artillery
    }
  }
}
