!
!  Core values
!
       with_t = .true.
       with_rh = .true.
!
       zz = 0.5*dz*fdz0(1)
       zw = 0.
       w0 = 0.
       do k = 1, nz
!
         if (zz <= 4000.) then
          t0(k) = 290. - 80.*zz/11500.
          rh0(k) = (82.5 - 64.5*zz/7500.)*1.e-2
          u00(k) = -2. - 4.*zz/8500.
          v00(k) = -2. - 4.*zz/8500.
         else if (zz <= 7500.) then        
	  t0(k) = 290. - 80.*zz/11500.
          rh0(k) = (82.5 - 64.5*zz/7500.)*1.e-2
          u00(k) = -2. - 4.*zz/8500.
          v00(k) = -2. - 4.*zz/8500.
	 else if (zz <= 8500.) then
          t0(k) = 290. - 80.*zz/11500.
          rh0(k) = (18. + 36.*(zz-7500.)/(10500.-7500.))*1.e-2
          u00(k) = -2. - 4.*zz/8500.
          v00(k) = -2. - 4.*zz/8500.
	 else if (zz <= 10500.) then
          t0(k) = 290. - 80.*zz/11500.
          rh0(k) = (18. + 36.*(zz-7500.)/(10500.-7500.))*1.e-2
          u00(k) = -2. - 4.*zz/8500.
          v00(k) = -2. - 4.*zz/8500.
          !u00(k) = -6. + 3.5*(zz-8500.)/(20000.-8500.)
          !v00(k) = -6. + 3.5*(zz-8500.)/(20000.-8500.)
	 else if (zz <= 11500.) then
          t0(k) = 290. - 80.*zz/11500.
          rh0(k) = (54. - 53.*(zz - 10500.)/(12500. - 10500.))*1.e-2
          u00(k) = -2. - 4.*zz/8500.
          v00(k) = -2. - 4.*zz/8500.
          !u00(k) = -6. + 3.5*(zz-8500.)/(20000.-8500.)
          !v00(k) = -6. + 3.5*(zz-8500.)/(20000.-8500.)
	 else if (zz <= 12500.) then
          t0(k) = 210. + 7.*(zz-11500.)/(13300.-11500.)
          rh0(k) = (54. - 53.*(zz - 10500.)/(12500. - 10500.))*1.e-2
          u00(k) = -2. - 4.*zz/8500.
          v00(k) = -2. - 4.*zz/8500.
          !u00(k) = -6. + 3.5*(zz-8500.)/(20000.-8500.)
          !v00(k) = -6. + 3.5*(zz-8500.)/(20000.-8500.)
	 else if (zz <= 13300.) then
          t0(k) = 210. + 7.*(zz-11500.)/(13300.-11500.)
          rh0(k) = 1.e-2
          u00(k) = -2. - 4.*zz/8500.
          v00(k) = -2. - 4.*zz/8500.
          !u00(k) = -6. + 3.5*(zz-8500.)/(20000.-8500.)
          !v00(k) = -6. + 3.5*(zz-8500.)/(20000.-8500.)
	 else
          t0(k) = 217.
          rh0(k) = 1.e-2
          u00(k) = -2. - 4.*zz/8500.
          v00(k) = -2. - 4.*zz/8500.
          !u00(k) = -6. + 3.5*(zz-8500.)/(20000.-8500.)
          !v00(k) = -6. + 3.5*(zz-8500.)/(20000.-8500.)
	endif
!
         k0(k) = 0.01
!
         if (k < nz) zz = zz + 0.5*dz*(fdz0(k)+fdz0(k+1))	   
         if (k < nz) zw = zw + dz*fdz0(k)
       enddo
