province = {
	id = 1433
	ic = { size = 4 current_size = 4 }
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
  consumer = 0.0000 
  supply = 0.0000 
  production = 1.0000 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  capital                = 1433 # Urumqi
  manpower               = 199.9 # 200 - building queue
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
  nationalprovinces      = { 1421 1430 1431 1432 1433 1435 1445 1446 1447 }
  ownedprovinces         = { 1421 1430 1431 1432 1433 1435 1445 1447 1446 }
  controlledprovinces    = { 1421 1430 1431 1432 1433 1435 1446 1445 1447 }
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # GW fighter
  techapps               = { 4010 2150 2290 1010 1190 5080 }
  blueprints             = { 6210 }
  diplomacy =
  { relation = { tag = CHC value = 40 }
    relation = { tag = SOV value = 125 }
    relation = { tag = TAN value = 125 }
	relation = { tag = GER value = 2 }
	relation = { tag = JAP value = 2 }
	relation = { tag = ITA value = 2 }
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
	province_development = { 
		id = { type = 25600 id = 5 } 
		name = "" 
		progress = 0.0000 
		location = 1433 
		cost = 2.0000 
		date = { 
			year = 1950 
			month = april 
			day = 20 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 32 
		done = 0 
		days = 2914 
		days_for_first = 285 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = infrastructure 
		} 
}
