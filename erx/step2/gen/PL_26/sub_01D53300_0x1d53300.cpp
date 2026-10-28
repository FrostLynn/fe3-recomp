#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_01D53300
// Address: 0x1d53300 - 0x1d53360
void sub_01D53300_0x1d53300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D53300_0x1d53300");
#endif

    switch (ctx->pc) {
        case 0x1d5331cu: goto label_1d5331c;
        case 0x1d5333cu: goto label_1d5333c;
        case 0x1d53348u: goto label_1d53348;
        default: break;
    }

    ctx->pc = 0x1d53300u;

    // 0x1d53300: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d53300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d53304: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d53304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d53308: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d53308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d5330c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d5330cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d53310: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d53310u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d53314: 0xc7543d6  jal         func_1D50F58
    ctx->pc = 0x1D53314u;
    SET_GPR_U32(ctx, 31, 0x1D5331Cu);
    ctx->pc = 0x1D53318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D53314u;
    // 0x1d53318: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F58u, 0x1D53314u, 0x1D5331Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5331Cu;
label_1d5331c:
    // 0x1d5331c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d5331cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d53320: 0x3c0f01d6  lui         $t7, 0x1D6
    ctx->pc = 0x1d53320u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)470 << 16));
    // 0x1d53324: 0x25efcbe8  addiu       $t7, $t7, -0x3418
    ctx->pc = 0x1d53324u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294953960));
    // 0x1d53328: 0x24440580  addiu       $a0, $v0, 0x580
    ctx->pc = 0x1d53328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
    // 0x1d5332c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x1d5332cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x1d53330: 0x460063c6  mov.s       $f15, $f12
    ctx->pc = 0x1d53330u;
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    // 0x1d53334: 0xc75466a  jal         func_1D519A8
    ctx->pc = 0x1D53334u;
    SET_GPR_U32(ctx, 31, 0x1D5333Cu);
    ctx->pc = 0x1D53338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D53334u;
    // 0x1d53338: 0xc5ed0000  lwc1        $f13, 0x0($t7) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D519A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D519A8u, 0x1D53334u, 0x1D5333Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5333Cu;
label_1d5333c:
    // 0x1d5333c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d5333cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d53340: 0xc7543d6  jal         func_1D50F58
    ctx->pc = 0x1D53340u;
    SET_GPR_U32(ctx, 31, 0x1D53348u);
    ctx->pc = 0x1D53344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D53340u;
    // 0x1d53344: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F58u, 0x1D53340u, 0x1D53348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D53348u;
label_1d53348:
    // 0x1d53348: 0xac40074c  sw          $zero, 0x74C($v0)
    ctx->pc = 0x1d53348u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 0));
    // 0x1d5334c: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1d5334cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1d53350: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d53350u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d53354: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d53354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d53358: 0x3e00008  jr          $ra
    ctx->pc = 0x1D53358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5335Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D53358u;
        // 0x1d5335c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D53358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D53360u;
}
