
##############################
# Country definition for IRQ #
##############################

province =
{ id         = 1823
  anti_air   = 2
  naval_base = { size = 4 current_size = 4 }
}              # Basrah
province = { id = 1864 anti_air = 1 } # Mosul
province =
{ id       = 1866
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
}            # Baghdad

#####################
# Country main data #
#####################

country =
{ tag                    = IRQ
  puppet                 = ENG
  control                = ENG
  # Resource Reserves
  energy                 = 200
  metal                  = 200
  rare_materials         = 100
  oil                    = 1000
  supplies               = 500
  manpower               = 15
  money                  = 10
  capital                = 1866
  transports             = 16
  escorts                = 3
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 5
    freedom           = 4
    free_market       = 6
    professional_army = 3
    defense_lobby     = 2
    interventionism   = 6
  }
  nationalprovinces      = { 1860 1864 1865 1866 1790 1824 1823 1806 1791 1825 }
  ownedprovinces         = { 1860 1864 1865 1866 1790 1824 1823 1806 1791 }
  controlledprovinces    = { 1860 1864 1865 1866 1790 1824 1823 1806 1791 }
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # GW fighter
  techapps               = { 4010 2150 2290 1010 1190 }
  diplomacy =
  { relation = { tag = AST value = 100 }
    relation = { tag = BHU value = 100 }
    relation = { tag = CAN value = 100 }
    relation = { tag = ENG value = 100 }
    relation = { tag = FRA value = 100 }
    relation = { tag = GER value = 25 }
    relation = { tag = ITA value = 25 }
    relation = { tag = NEP value = 100 }
    relation = { tag = NZL value = 100 }
    relation = { tag = OMN value = 125 }
    relation = { tag = PER value = 125 }
    relation = { tag = SAF value = 100 }
    relation = { tag = SAU value = 125 }
    relation = { tag = USA value = 120 }
    relation = { tag = YEM value = 125 }
  }
  headofstate            = { type = 9 id = 91001 }
  headofgovernment       = { type = 9 id = 91002 }
  foreignminister        = { type = 9 id = 91003 }
  armamentminister       = { type = 9 id = 91004 }
  ministerofsecurity     = { type = 9 id = 91005 }
  ministerofintelligence = { type = 9 id = 91006 }
  chiefofstaff           = { type = 9 id = 91007 }
  chiefofarmy            = { type = 9 id = 91008 }
  chiefofnavy            = { type = 9 id = 91009 }
  chiefofair             = { type = 9 id = 91010 }
  landunit =
  { id       = { type = 22500 id = 3 }
    name     = "Royal Iraqi Army"
    location = 1866
    division =
    { id       = { type = 22500 id = 4 }
      name     = "1. Iraqi Infantry Division"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 22500 id = 5 }
      name     = "2. Iraqi Infantry Division"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 22500 id = 6 }
      name     = "3. Iraqi Infantry Division"
      strength = 100
      type     = infantry
      extra    = artillery
    }
    division =
    { id       = { type = 22500 id = 7 }
      name     = "4. Iraqi Infantry Division"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 22500 id = 8 }
      name     = "1. Iraqi Motor Infantry Div."
      strength = 30
      type     = infantry
    }
  }
  airunit =
  { id       = { type = 22500 id = 1 }
    name     = "Royal Army Air Force"
    location = 1866
    base     = 1866
    division =
    { id       = { type = 22500 id = 2 }
      name     = "1. RIAF Fighter Group"
      strength = 30
      type     = interceptor
      model    = 0
    }
  }
}
