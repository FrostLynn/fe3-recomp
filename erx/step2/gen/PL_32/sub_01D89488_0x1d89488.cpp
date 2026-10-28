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

// Function: sub_01D89488
// Address: 0x1d89488 - 0x1d89540
void sub_01D89488_0x1d89488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D89488_0x1d89488");
#endif

    switch (ctx->pc) {
        case 0x1d894c4u: goto label_1d894c4;
        case 0x1d894d4u: goto label_1d894d4;
        case 0x1d894e8u: goto label_1d894e8;
        case 0x1d894fcu: goto label_1d894fc;
        case 0x1d8950cu: goto label_1d8950c;
        default: break;
    }

    ctx->pc = 0x1d89488u;

    // 0x1d89488: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d89488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d8948c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d8948cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d89490: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1d89490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1d89494: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1d89494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1d89498: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d89498u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8949c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d8949cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d894a0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1d894a0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d894a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d894a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d894a8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d894a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d894ac: 0x30f100ff  andi        $s1, $a3, 0xFF
    ctx->pc = 0x1d894acu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1d894b0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1d894b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1d894b4: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d894b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d894b8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1d894b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d894bc: 0xc762256  jal         func_1D88958
    ctx->pc = 0x1D894BCu;
    SET_GPR_U32(ctx, 31, 0x1D894C4u);
    ctx->pc = 0x1D894C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D894BCu;
    // 0x1d894c0: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88958u, 0x1D894BCu, 0x1D894C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D894C4u;
label_1d894c4:
    // 0x1d894c4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d894c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d894c8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d894c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d894cc: 0xc762258  jal         func_1D88960
    ctx->pc = 0x1D894CCu;
    SET_GPR_U32(ctx, 31, 0x1D894D4u);
    ctx->pc = 0x1D894D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D894CCu;
    // 0x1d894d0: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88960u, 0x1D894CCu, 0x1D894D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D894D4u;
label_1d894d4:
    // 0x1d894d4: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d894d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d894d8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1d894d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d894dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d894dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d894e0: 0xc76225a  jal         func_1D88968
    ctx->pc = 0x1D894E0u;
    SET_GPR_U32(ctx, 31, 0x1D894E8u);
    ctx->pc = 0x1D894E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D894E0u;
    // 0x1d894e4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88968u, 0x1D894E0u, 0x1D894E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D894E8u;
label_1d894e8:
    // 0x1d894e8: 0xae400430  sw          $zero, 0x430($s2)
    ctx->pc = 0x1d894e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1072), GPR_U32(ctx, 0));
    // 0x1d894ec: 0x26640390  addiu       $a0, $s3, 0x390
    ctx->pc = 0x1d894ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 912));
    // 0x1d894f0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1d894f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d894f4: 0xc76225c  jal         func_1D88970
    ctx->pc = 0x1D894F4u;
    SET_GPR_U32(ctx, 31, 0x1D894FCu);
    ctx->pc = 0x1D894F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D894F4u;
    // 0x1d894f8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88970u, 0x1D894F4u, 0x1D894FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D894FCu;
label_1d894fc:
    // 0x1d894fc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d894fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d89500: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d89500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d89504: 0xc762250  jal         func_1D88940
    ctx->pc = 0x1D89504u;
    SET_GPR_U32(ctx, 31, 0x1D8950Cu);
    ctx->pc = 0x1D89508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D89504u;
    // 0x1d89508: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88940u, 0x1D89504u, 0x1D8950Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8950Cu;
label_1d8950c:
    // 0x1d8950c: 0xa27109b0  sb          $s1, 0x9B0($s3)
    ctx->pc = 0x1d8950cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2480), (uint8_t)GPR_U32(ctx, 17));
    // 0x1d89510: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d89510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d89514: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1d89514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d89518: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d89518u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8951c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d8951cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d89520: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d89520u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d89524: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d89524u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d89528: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1d89528u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d8952c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1d8952cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d89530: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1d89530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d89534: 0x876225e  j           func_1D88978
    ctx->pc = 0x1D89534u;
    ctx->pc = 0x1D89538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D89534u;
    // 0x1d89538: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88978u;
    sub_01D88978_0x1d88978(rdram, ctx, runtime); return;
    ctx->pc = 0x1D8953Cu;
    // 0x1d8953c: 0x0  nop
    ctx->pc = 0x1d8953cu;
    // NOP
    ctx->pc = 0x1d89540u;
}
