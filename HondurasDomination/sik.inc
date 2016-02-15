province = {
	id = 1433
	ic = { size = 2 current_size = 2 }
} # Urumqi

##############################
# Country definition for SIK #
##############################

country =
{ tag                    = SIK
  # Resource Reserves
  energy                 = 20000
  metal                  = 20000
  rare_materials         = 5000
  oil                    = 5000
  supplies               = 2000
  money                  = 10
  capital                = 1433 # Urumqi
  manpower               = 200
  dissent                = 30
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 3
    professional_army = 1
    defense_lobby     = 5
    interventionism   = 5
  }
  nationalprovinces      = { 1421 1432 1433 1435 1445 1446 1447 1430 1431 }
  ownedprovinces         = { 1435 1445 1447 1421 1432 1433 1446 1430 1431 }
  controlledprovinces    = { 1421 1432 1433 1446 1430 1431 1445 1447 1435 }
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # GW fighter
  techapps               = { 4010 2150 2290 1010 1190 }
  diplomacy =
  { relation = { tag = CHC value = 40 }
    relation = { tag = SOV value = 125 }
    relation = { tag = TAN value = 125 }
  }
  headofstate            = { type = 9 id = 72001 }
  headofgovernment       = { type = 9 id = 72002 }
  foreignminister        = { type = 9 id = 72003 }
  armamentminister       = { type = 9 id = 72004 }
  ministerofsecurity     = { type = 9 id = 72005 }
  ministerofintelligence = { type = 9 id = 72006 }
  chiefofstaff           = { type = 9 id = 72007 }
  chiefofarmy            = { type = 9 id = 72008 }
  chiefofnavy            = { type = 9 id = 72009 }
  chiefofair             = { type = 9 id = 72010 }
  landunit =
  { location = 1433
    name     = "Xin'jiang JÅEtuan 1"
    id       = { type = 25600 id = 1 }
    division =
    { id   = { type = 25600 id = 2 }
      name = "1 Xin'jiang Shi"
      type = infantry
    }
    division =
    { id   = { type = 25600 id = 3 }
      name = "7 Xin'jiang LÅE"
      type = militia
    }
    division =
    { id   = { type = 25600 id = 4 }
      name = "8 Xin'jiang LÅE"
      type = militia
    }
  }
}
