
##############################
# Country definition for LUX #
##############################

country =
{ tag                    = LUX
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  consumer = 0.3234 
  supply = 0.0100 
  production = 0.6666 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  manpower               = -0.1 # 0 - "building queue"
  capital                = 71
  diplomacy =
  { relation = { tag = BEL value = 200 }
    relation = { tag = DEN value = 100 }
    relation = { tag = FIN value = 100 }
    relation = { tag = FRA value = 120 }
    relation = { tag = GER value = -50 }
    relation = { tag = HOL value = 150 }
    relation = { tag = IRE value = 75 }
    relation = { tag = NOR value = 100 }
    relation = { tag = SWE value = 100 }
	relation = { tag = ENG value = 28 }
	relation = { tag = CAN value = 5 }
	relation = { tag = ALB value = 4 }
	relation = { tag = POR value = 0 }
	relation = { tag = CZE value = 5 }
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 1 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 1 }
  SpyInfo                = { country = "HOL" NumberOfSpies = 1 }
  SpyInfo                = { country = "GER" NumberOfSpies = 1 }
  SpyInfo                = { country = "BEL" NumberOfSpies = 1 }
  nationalprovinces      = { 71 }
  ownedprovinces         = { 71 }
  controlledprovinces    = { 71 }
  # Western Minor Tech '36
  # Group D 1936 techs
  # ######################
  # GW fighter
  techapps               = { 4010 2150 2290 2300 2310 1010 1190 1110 2450 2460 2510 5010 5020 5080 5090 5190 6010 14000 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 1
    freedom           = 9
    free_market       = 8
    professional_army = 5
    defense_lobby     = 2
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 66001 }
  headofgovernment       = { type = 9 id = 66002 }
  foreignminister        = { type = 9 id = 66003 }
  armamentminister       = { type = 9 id = 66004 }
  ministerofsecurity     = { type = 9 id = 66005 }
  ministerofintelligence = { type = 9 id = 66006 }
  chiefofstaff           = { type = 9 id = 66007 }
  chiefofarmy            = { type = 9 id = 66008 }
  chiefofnavy            = { type = 9 id = 66009 }
  chiefofair             = { type = 9 id = 66010 }
  landunit =
  { id       = { type = 27500 id = 1 }
    name     = "Luxembourger Schützen"
    location = 71
    division =
    { id       = { type = 27500 id = 2 }
      name     = "1. Landesschützen-Division"
      strength = 30
      type     = infantry
    }
  } 
	province_development = { 
		id = { type = 27500 id = 3 } 
		name = "" 
		progress = 0.0000 
		location = 71 
		cost = 2.0000 
		date = { 
			year = 1940 
			month = january 
			day = 13 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 20 
		done = 0 
		days = 1649 
		days_for_first = 125 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = infrastructure 
		} 
}
