      u00(:) = 0.
      v00(:) = 0.
      w0(:)  = 0.
      p0(:)  = 100000.
      pt0(:) = 300.
      qt0(:) = 0.
      k0(:)  = 1.e-16
            
      den0(1:nz) = p0(1:nz) / (Ra*Pt0(:)*(p0(1:nz)/1.E+05)**(Ra/cp))
!      den0(:) = 1.
!      avden0(1:nz) = den0(1:nz)
      scal0(:,:) = 0.
