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

// Function: sub_01C00D80
// Address: 0x1c00d80 - 0x1c00df8
void sub_01C00D80_0x1c00d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C00D80_0x1c00d80");
#endif

    switch (ctx->pc) {
        case 0x1c00da4u: goto label_1c00da4;
        case 0x1c00dd0u: goto label_1c00dd0;
        case 0x1c00ddcu: goto label_1c00ddc;
        default: break;
    }

    ctx->pc = 0x1c00d80u;

    // 0x1c00d80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c00d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c00d84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c00d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c00d88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c00d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c00d8c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c00d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c00d90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c00d90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c00d94: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c00d94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c00d98: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c00d98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c00d9c: 0xc700018  jal         func_1C00060
    ctx->pc = 0x1C00D9Cu;
    SET_GPR_U32(ctx, 31, 0x1C00DA4u);
    ctx->pc = 0x1C00DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C00D9Cu;
    // 0x1c00da0: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00060u, 0x1C00D9Cu, 0x1C00DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C00DA4u;
label_1c00da4:
    // 0x1c00da4: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1c00da4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1c00da8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c00da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c00dac: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c00dacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c00db0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c00db0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c00db4: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1c00db4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1c00db8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c00db8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c00dbc: 0x1f17821  addu        $t7, $t7, $s1
    ctx->pc = 0x1c00dbcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x1c00dc0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c00dc0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c00dc4: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1c00dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c00dc8: 0xc700024  jal         func_1C00090
    ctx->pc = 0x1C00DC8u;
    SET_GPR_U32(ctx, 31, 0x1C00DD0u);
    ctx->pc = 0x1C00DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C00DC8u;
    // 0x1c00dcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00090u, 0x1C00DC8u, 0x1C00DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C00DD0u;
label_1c00dd0:
    // 0x1c00dd0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c00dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c00dd4: 0xc700018  jal         func_1C00060
    ctx->pc = 0x1C00DD4u;
    SET_GPR_U32(ctx, 31, 0x1C00DDCu);
    ctx->pc = 0x1C00DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C00DD4u;
    // 0x1c00dd8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00060u, 0x1C00DD4u, 0x1C00DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C00DDCu;
label_1c00ddc:
    // 0x1c00ddc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c00ddcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c00de0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c00de0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c00de4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c00de4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c00de8: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1c00de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1c00dec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c00decu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c00df0: 0x8700028  j           func_1C000A0
    ctx->pc = 0x1C00DF0u;
    ctx->pc = 0x1C00DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C00DF0u;
    // 0x1c00df4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C000A0u;
    sub_01C000A0_0x1c000a0(rdram, ctx, runtime); return;
    ctx->pc = 0x1C00DF8u;
}
